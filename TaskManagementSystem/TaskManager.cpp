#include <string>
#include "TaskManager.h"

CTask::CTask(int p_iId, std::string p_sTaskTitle, EPriority p_eTaskPriority) : Id(p_iId), sTaskTitle(p_sTaskTitle),
taskPriority(p_eTaskPriority), taskContext(std::make_unique<CCreateState>()),
tStartDate(std::time(nullptr)), tEndDate(tStartDate + 2 * 24 * 60 * 60)
{
	//NOP
}
