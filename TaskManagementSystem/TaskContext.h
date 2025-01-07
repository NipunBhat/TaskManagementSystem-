#pragma once

#include <vector>
#include "TaskStates.h"

class CTaskContext
{
public:
	CTaskContext() = default;
	~CTaskContext() = default;

	void SetState();
	void Attach();
	void Notify();
	void Execute();
protected:

private:

};