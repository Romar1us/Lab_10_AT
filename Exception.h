#ifndef EXCEPTION_H
#define EXCEPTION_H
#include <iostream>
#include <string>
#include <fstream>
#include <exception>

class ParentException : public std::exception
{
public:
	ParentException() = delete;
	ParentException(char* message);

};
class EmptyObjectDeletionException : public ParentException
{
public:
	EmptyObjectDeletionException();
	EmptyObjectDeletionException(char* message);
};

class EmptyObjectAvgException : public ParentException
{
public:
	EmptyObjectAvgException();
	EmptyObjectAvgException(char* message);
};

class DifferentSizeException : public ParentException
{
public:
	DifferentSizeException();
	DifferentSizeException(char* message);
};

class NoMemoryException : public ParentException
{
public:
	NoMemoryException();
	NoMemoryException(char* message);
};

class IOException : public ParentException
{
public:
	IOException();
	IOException(char* message);
};

#endif