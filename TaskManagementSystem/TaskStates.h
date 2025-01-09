#pragma once
#include <iostream>
#include "TaskContext.h"

class CTaskContext;

enum ETaskState
{
	CREATED = 0,
	INPROGRESS,
	COMPLETED
};

class ITaskState
{
public:
	ITaskState() = default;
	virtual ~ITaskState() = default;
	
	virtual void Handle(CTaskContext &p_taskContext) = 0;
	virtual std::string GetCurrentState() = 0;

protected:
};

class CCreateState : public ITaskState
{
public:
	CCreateState() = default;
	~CCreateState()= default;

	void Handle(CTaskContext& p_taskContext) override;
	std::string GetCurrentState();
};

class CInProgressState : public ITaskState
{
public:
	CInProgressState() = default;
	~CInProgressState() = default;

	void Handle(CTaskContext& p_taskContext) override;
	std::string GetCurrentState();
};

class CCompletedState : public ITaskState
{
public:
	CCompletedState() = default;
	~CCompletedState() = default;

	void Handle(CTaskContext& p_taskContext);
	std::string GetCurrentState();
};