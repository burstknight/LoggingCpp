#include "../includes/LoggingCpp.h"
#include <cmath>
#include <cstdio>
#include <ctime>
#include <string>

std::string LoggingCpp::myLogger::getDate(){
	char buffer[4096];
	time_t oNowTime = time(NULL);
	struct tm *poLocalTime = localtime(&oNowTime);
	sprintf(buffer, "%04d_%02d%02d", poLocalTime->tm_year + 1900, poLocalTime->tm_mon, poLocalTime->tm_mday);

	std::string sDate = buffer;
	return  sDate;
} // End of myLogger::getDate

std::string LoggingCpp::myLogger::getCurrTimestamp(){
	char buffer[4096];
	time_t uiSecond;
	int iMs;
	struct timespec oSpec;
	struct tm *poNow;
	clock_gettime(CLOCK_REALTIME, &oSpec);
	uiSecond = oSpec.tv_sec;
	iMs = std::round(oSpec.tv_nsec / 1.0e6);
	if(iMs > 9999){
		uiSecond++;
		iMs = 0;
	} // End of if-condition
	
	poNow = localtime(&uiSecond);
	sprintf(buffer, "%04d-%02d-%02d %02d:%02d:%02d.%04d", 
			poNow->tm_year + 1900, poNow->tm_mon, poNow->tm_mday,
			poNow->tm_hour, poNow->tm_min, poNow->tm_sec, iMs);

	std::string sTimestamp = buffer;
	return sTimestamp;
} // End of myLogger::getCurrTimestamp

