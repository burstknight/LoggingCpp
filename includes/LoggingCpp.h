#include <cstdarg>
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
		 * @param pcLogPath: The directory of the log file.
		 * @param pcPrefix: The prefix of the log filename
		 * */
		myLogger(const char *pcStoreDir = ".", const char *pcPrefix = "");

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

		/* Description: Write the log message into stream.
		 * @param pStreamHandler: Set the target to write the log message
		 * @param pcTerminalColor: The color code to show on terminal
		 * @param pcLevel: The level of the log message
		 * @param pcKeyword: The keyword of the log message
		 * @param pcMessage: The log message
		 * @param args: This argument for the standard format
		 * @return Return the length of the message to write stream
		 */
		int writeLog(FILE* pStreamHandler, const char *pcTerminalColor, 
				const char *pcLevel, const char *pcKeyword, const char *pcMessage, va_list args);
	};	// End of class myLogger

}	// En of namespace LoggingCpp
