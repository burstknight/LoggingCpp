# Change Log

## [Unrelease]
### [Added]
- Add the head file `includes/LoggingCpp.h` to define the namespace and class.
- Add the method `LoggingCpp::myLogger::getCurrentTimestamp()` to get the current timestamp.
- Add the method `LoggingCpp::myLogger::getDate()` to get the current date for generating filename.
- Define the method `LoggingCpp::myLogger::writeLog()` to write the log messages into stream.

### [Changed]
- Change the definition of the constructor of the class `LoggingCpp::myLogger` to receive two parameters that can set the store directory and prefix of the filename for log file.

### [Fixed]

### [Removed]

