#include "../includes/LoggingCpp.h"
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

