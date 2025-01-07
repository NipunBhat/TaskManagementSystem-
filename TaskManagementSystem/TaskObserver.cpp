#include "TaskObserver.h"

CEmailObserver::CEmailObserver(const std::string p_sEmailId) : _sEmailId(p_sEmailId)
{
	//NOP
}

void CEmailObserver::Update(const std::string p_sMessage)
{
	std::cout << "EMAIL : " << _sEmailId << " message is, " << p_sMessage << std::endl;
}

CSMSObserver::CSMSObserver(const std::string p_sPhoneNo) : _sPhoneNumber(p_sPhoneNo)
{
	//NOP
}

void CSMSObserver::Update(const std::string p_sMessage)
{
	std::cout << "SMS : " << _sPhoneNumber << " message is, " << p_sMessage << std::endl;
}