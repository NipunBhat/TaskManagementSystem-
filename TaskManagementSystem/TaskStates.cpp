#include "TaskStates.h"

// Create State
void CCreateState::Handle(CTaskContext& p_taskContext)
{
	std::string message = "Task has been Created ...";
	std::cout << message << std::endl;
	p_taskContext.Notify(message);
}

std::string CCreateState::GetCurrentState()
{
	return "Created";
}

// InProgress State
void CInProgressState::Handle(CTaskContext& p_taskContext)
{
	std::string message = "Task is InProgress ...";
	std::cout << message << std::endl;
	p_taskContext.Notify(message);
}

std::string CInProgressState::GetCurrentState()
{
	return "InProgress";
}

// Completed State
void CCompletedState::Handle(CTaskContext& p_taskContext)
{
	std::string message = "Task is completed ...";
	std::cout << message << std::endl;
	p_taskContext.Notify(message);
}

std::string CCompletedState::GetCurrentState()
{
	return "Completed";
}

