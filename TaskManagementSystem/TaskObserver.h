#pragma once
#include <string>
#include <iostream>

class ITaskObserver
{
public:
	virtual ~ITaskObserver() = default;
	virtual void Update(const std::string message) = 0;
};

class CEmailObserver : public ITaskObserver
{
public:
	CEmailObserver(const std::string p_sEmailId);
	~CEmailObserver() = default;

	void Update(const std::string p_sMessage) override;

private:
	const std::string _sEmailId;
};

class CSMSObserver : public ITaskObserver
{
public:
	CSMSObserver(const std::string p_sEmailId);
	~CSMSObserver() = default;

	void Update(const std::string p_sMessage) override;

private:
	const std::string _sPhoneNumber;
};