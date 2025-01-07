#pragma once
#include <iostream>

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
	
	virtual void Handle() = 0;
	virtual std::string GetCurrentState() = 0;

protected:
	std::string sStateName;
};

class CCreateState : public ITaskState
{
public:
	CCreateState() = default;
	~CCreateState()= default;

	void Handle();
	std::string GetCurrentState();
};

class CInProgressState : public ITaskState
{
public:
	CInProgressState() = default;
	~CInProgressState() = default;

	void Handle();
	std::string GetCurrentState();
};

class CCompletedState : public ITaskState
{
public:
	CCompletedState() = default;
	~CCompletedState() = default;

	void Handle();
	std::string GetCurrentState();
};