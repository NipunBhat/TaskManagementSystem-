#include "TaskContext.h"

CTaskContext::CTaskContext(std::unique_ptr<ITaskState> p_pNewState) : _pCurrentTaskState(std::move(p_pNewState))
{
	//NOP
}

void CTaskContext::SetState(std::unique_ptr<ITaskState> p_pNewState)
{
	_pCurrentTaskState = std::move(p_pNewState);
}

void CTaskContext::Attach(std::shared_ptr<ITaskObserver> p_pObserver)
{
	_vecTaskObservers.push_back(p_pObserver);
}

void CTaskContext::Notify(const std::string p_sMessage)
{
	for (auto observer : _vecTaskObservers)
	{
		observer->Update(p_sMessage);
	}
}

void CTaskContext::Execute()
{
	if (_pCurrentTaskState)
	{
		_pCurrentTaskState->Handle(*this);
	}
}