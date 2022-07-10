#include <stdio.h>
#include <stdlib.h>
#include <string>

namespace LoggingCpp {
	enum LoggingLevel{
		Debug,
		Info,
		Warning,
		Error,
		Critical
	};	// End of enum LoggingLevel

	class myLogger{
		// private fields
	private:
		char *m_pcLogPath;

		// public methods
	public:
		/* Description: Constructor
		 * @param pcLogPath: The path of the log file.
		 * */
		myLogger(const char *pcLogPath);

		/* Description: Log message.
		 * @param level: The log level.
		 * @param pcKeyword: The keyword of the log message.
		 * @param pcMessage: The message to log.
		 * @param isWrite: Write the message into file if this flag is `true`, otherwise just show on terminal
		 * @return return 0 if succeed to log message, otherwise return 1
		 * */
		int logMessage(LoggingLevel level, const char *pcKeyword, bool isWrite ,const char *pcMessage, ...);

		// private methods
	private:
		/* Description: Get the current timestamp
		 * @return return the current timestamp
		 * */
		std::string getCurrTimestamp();

		/* Description: Get the current date.
		 * @return return the current date
		 */
		std::string getDate();
	};	// End of class myLogger

}	// En of namespace LoggingCpp
