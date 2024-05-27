#include "Exception.h"


ParentException::ParentException(char* message) : std::exception(message)
{
	time_t rawtime;
	struct tm* timeinfo;
	time(&rawtime); //gets the time from the computer
	timeinfo = localtime(&rawtime); //store that time here
	std::ofstream logFile;
	logFile.open("Log.txt", std::ios::out | std::ios::app);
	if (logFile.is_open())
	{
		logFile << "[" << timeinfo->tm_hour << ":" << timeinfo->tm_min << " "
			<< timeinfo->tm_mday << "/" << timeinfo->tm_mon << "/" << timeinfo->tm_year << "]\t"
			<< "Such error occurred: " << message << "\n";
	}
	logFile.close();
}

EmptyObjectDeletionException::EmptyObjectDeletionException() : ParentException("Deletion from empty object") {}


EmptyObjectDeletionException::EmptyObjectDeletionException(char* message) : ParentException(message) {}

EmptyObjectAvgException::EmptyObjectAvgException() : ParentException("Calculation Avg of emoty object") {}

EmptyObjectAvgException::EmptyObjectAvgException(char* message) : ParentException(message) {}

DifferentSizeException::DifferentSizeException() : ParentException("Operation on different size objects") {}

DifferentSizeException::DifferentSizeException(char* message) : ParentException(message) {}

NoMemoryException::NoMemoryException() : ParentException("No memory left") {}

NoMemoryException::NoMemoryException(char* message) : ParentException(message) {}

IOException::IOException() : ParentException("Stream Error") {}

IOException::IOException(char* message) : ParentException(message) {}
