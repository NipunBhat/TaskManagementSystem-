#pragma once
#include <string>
#include "TaskStates.h"

class CTaskManager;

enum EPriority
{
	LOW = 0,
	MEDIUM,
	HIGH
};

class CTask
{
public:

private:
	int Id;
	std::string sTaskTitle;
	std::string sTaskDescription;
	time_t tStartDate;
	time_t tEndDate;
	EPriority taskPriority;
	CTaskContext taskContext;
	friend CTaskManager;

	CTask(int p_iId, std::string p_sTaskTitle, EPriority p_eTaskPriority);
};

class CTaskManager
{
public:

private:

};