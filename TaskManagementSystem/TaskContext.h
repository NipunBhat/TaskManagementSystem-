#pragma once

#include <vector>
#include "TaskStates.h"
#include "TaskObserver.h"

class ITaskState;

class CTaskContext
{
public:
	CTaskContext(std::unique_ptr<ITaskState> p_pNewState);
	~CTaskContext() = default;

	void SetState(std::unique_ptr<ITaskState> p_pNewState);
	void Attach(std::shared_ptr<ITaskObserver> p_pObserver);
	void Notify(const std::string p_sMessage);
	void Execute();
protected:

private:
	std::unique_ptr<ITaskState> _pCurrentTaskState;
	std::vector<std::shared_ptr<ITaskObserver>> _vecTaskObservers;
};