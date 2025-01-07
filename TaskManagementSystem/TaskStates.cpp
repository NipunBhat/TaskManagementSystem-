#include "TaskStates.h"

// Create State
void CCreateState::Handle()
{
	std::string message = "Task has been Created ...";
	std::cout << message << std::endl;
	//Notify observers
}

std::string CCreateState::GetCurrentState()
{
	return "Created";
}

// InProgress State
void CInProgressState::Handle()
{
	std::string message = "Task is InProgress ...";
	std::cout << message << std::endl;
	//Notify observers
}

std::string CInProgressState::GetCurrentState()
{
	return "InProgress";
}

// Completed State
void CCompletedState::Handle()
{
	std::string message = "Task is completed ...";
	std::cout << message << std::endl;
	//Notify 
}

std::string CCompletedState::GetCurrentState()
{
	return "Completed";
}

