#pragma once
#ifndef DEQUE_H
#define DEQUE_H 
#include <iostream>
#include <cmath>
#include <Windows.h>
using std::cout;
using std::cin;
using std::endl;

template<typename T>
class CDeque {
private:

	T* elements;
	int maxsize;
public:
	CDeque();
	CDeque(int  size);
	CDeque(const CDeque& other);
	~CDeque();

	void AddLeft(T num);

	void AddRight(T num);

	void DeleteRight();

	void DeleteLeft();

	int get_maxsize() noexcept;

	T Average();

	void Clean() noexcept;

	bool IsEmpty() noexcept;

	CDeque<T> operator*(double num) noexcept;
	CDeque<T>& operator=(CDeque<T>& other);
	CDeque<T>& operator=(CDeque<T>&& other);
	CDeque<T> operator+(const CDeque<T>& other);
	CDeque<T> operator-(const CDeque<T>& other);
	friend std::ostream& operator<< (std::ostream& out, CDeque<T>& temp)
	{
		try
		{
			for (int i = 0; i < temp.maxsize; i++)
			{
				out << temp.elements[i] << "; ";
			}
		}
		catch (std::ostream::failure)
		{
			throw IOException();
		}

		out << endl;
		return out;
	}
	friend std::istream& operator>> (std::istream& in, CDeque<T>& temp)
	{
		try
		{
			for (int i = 0; i < temp.maxsize; i++)
			{
				cout << "Enter " << i + 1 << " element:";
				in >> temp.elements[i];
				cout << endl;
			}
		}
		catch (std::istream::failure)
		{
			throw IOException();
		}
		return in;
	}
};

#endif

template<typename T>
inline CDeque<T>::CDeque() : maxsize(0), elements(nullptr) {}

template<typename T>
inline CDeque<T>::CDeque(int size) : maxsize(size)
{
	try
	{
		elements = new T[size];
	}
	catch (std::bad_alloc)
	{
		throw NoMemoryException();
	}
	for (int i = 0; i < size; i++)
	{
		this->elements[i] = i;
	}
}

template<typename T>
inline CDeque<T>::CDeque(const CDeque& other) : maxsize(other.maxsize)
{
	try
	{
		this->elements = new T[maxsize];
	}
	catch (std::bad_alloc)
	{
		throw NoMemoryException();
	}

	for (int i = 0; i < other.maxsize; i++) {
		this->elements[i] = other.elements[i];
	}
}

template<typename T>
inline CDeque<T>::~CDeque()
{
	Clean();
}

template<typename T>
inline void CDeque<T>::AddLeft(T num)
{
	try
	{
		T* new_elements = new T[maxsize + 1];;
		new_elements[0] = num;
		for (int i = 0; i < maxsize; i++) {
			new_elements[i + 1] = elements[i];
		}
		if (maxsize)
		{
			delete[] elements;
		}
		++maxsize;
		elements = new_elements;
	}
	catch (std::bad_alloc)
	{
		throw::NoMemoryException();
	}
}

template<typename T>
inline void CDeque<T>::AddRight(T num)
{
	try
	{
		T* new_elements = new T[maxsize + 1];
		new_elements[maxsize] = num;
		for (int i = 0; i < maxsize; i++) {
			new_elements[i] = elements[i];
		}
		if (maxsize)
		{
			delete[] elements;
		}
		++maxsize;
		elements = new_elements;
	}
	catch (std::bad_alloc)
	{
		throw NoMemoryException();
	}
}

template<typename T>
inline void CDeque<T>::DeleteRight()
{
	if (IsEmpty())
	{
		throw EmptyObjectDeletionException();
	}
	T* new_elements = new T[maxsize - 1];
	for (int i = 0; i < maxsize - 1; i++) {
		new_elements[i] = elements[i];
	}
	--maxsize;
	delete[] elements;
	elements = new_elements;
}

template<typename T>
inline void CDeque<T>::DeleteLeft()
{
	if (IsEmpty())
	{
		throw EmptyObjectDeletionException();
	}
	T* new_elements = new T[maxsize - 1];
	for (int i = 0; i < maxsize - 1; i++) {
		new_elements[i] = elements[i + 1];
	}
	--maxsize;
	delete[] elements;
	elements = new_elements;
}

template<typename T>
inline int CDeque<T>::get_maxsize() noexcept
{
	return maxsize;
}

template<typename T>
inline T CDeque<T>::Average()
{
	if (IsEmpty())
	{
		throw EmptyObjectAvgException();
	}
	T sum = 0;
	T avg = 0;
	for (int i = 0; i < maxsize; i++)
	{
		sum = sum + elements[i];
	}
	avg = sum / maxsize;
	return avg;
}

template<typename T>
inline void CDeque<T>::Clean() noexcept
{
	if (IsEmpty())
	{
		return;
	}
	delete[] elements;
	maxsize = 0;
	elements = nullptr;
}

template<typename T>
inline bool CDeque<T>::IsEmpty() noexcept
{
	return maxsize == 0;
}

template<typename T>
inline CDeque<T> CDeque<T>::operator*(double num) noexcept
{
	CDeque<T> ResultDeque;
	for (int i = 0; i < maxsize; i++) {
		ResultDeque.AddLeft(elements[i] * num);
	}
	return ResultDeque;
}

template<typename T>
inline CDeque<T>& CDeque<T>::operator=(CDeque<T>& other)
{
	maxsize = other.maxsize;
	try
	{
		elements = new T[maxsize];
		for (size_t i = 0; i < maxsize; i++)
		{
			elements[i] = other.elements[i];
		}
	}
	catch (std::bad_alloc)
	{
		throw NoMemoryException();
	}
	return *this;
}

template<typename T>
inline CDeque<T>& CDeque<T>::operator=(CDeque<T>&& other)
{
	Clean();
	elements = other.elements;
	this->maxsize = other.maxsize;
	other.elements = nullptr;
	other.maxsize = 0;
	return *this;
}

template<typename T>
inline CDeque<T> CDeque<T>::operator+(const CDeque<T>& other)
{
	if (maxsize != other.maxsize)
	{
		throw DifferentSizeException();
	}
	CDeque<T> ResultDeque;
	for (int i = 0; i < maxsize; i++) {
		ResultDeque.AddRight(elements[i] + other.elements[i]);
	}
	return ResultDeque;
}

template<typename T>
inline CDeque<T> CDeque<T>::operator-(const CDeque<T>& other)
{
	if (maxsize != other.maxsize)
	{
		throw DifferentSizeException();
	}
	CDeque<T> ResultDeque;
	for (int i = 0; i < maxsize; i++) {
		ResultDeque.AddRight(elements[i] - other.elements[i]);
	}
	return ResultDeque;
}





