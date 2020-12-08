#ifndef STACK_H
#define STACK_H

#include <iostream>
#include <fstream>

using namespace std;

template <typename T>
class TStack
{
private:
	T* stackPtr;                      
	const int size;                  
	int num;                          
public:
	TStack(int = 25);                  
	TStack(const TStack<T>&);          
	~TStack();                         


	inline int IsEmpty(void) const; 
	inline int IsFull(void) const; 
	inline void put(const T&);     
	inline T deleteElem();          
	inline const T& Peek(int) const; 
	inline int getStackSize() const;  
	inline T* getPtr() const;         
	inline int getNum() const;        

	
	inline int min_elem(); 
	inline int max_elem(); 


	friend ostream& operator<<(ostream& out, const TStack& st)
	{
		for (int ix = st.num - 1; ix >= 0; ix--)
			cout << st.stackPtr[ix] << endl;
		return out;
	}
};


template <typename T>
TStack<T>::TStack(int maxSize) : size(maxSize) 
{
	if (maxSize < 0)
	{
		throw  logic_error("ERROR");
	}
	stackPtr = new T[size]; 
	num = 0; 
}

template <typename T> 
inline int TStack<T>::IsEmpty() const
{
	return stackPtr == NULL;

	for (int i = 0; i < size; i++)
	{
		if (stackPtr[i] == 0)
		{
			continue;
		}
		else
		{
			throw  logic_error("ERROR");
		}

	}
}


template <typename T> 
inline int TStack<T>::IsFull() const
{

	for (int i = 0; i < size; i++)
	{
		if (stackPtr[i] != 0)
		{
			continue;
		}
		else
		{
			throw  logic_error("ERROR");
		}
	}
}



template <typename T>
TStack<T>::TStack(const TStack<T>& otherStack) : size(otherStack.getStackSize()) 
{
	stackPtr = new T[size]; 
	num = otherStack.getNum();

	for (int ix = 0; ix < num; ix++)
	{
		stackPtr[ix] = otherStack.getPtr()[ix];
	}
}

template <typename T>
TStack<T>::~TStack()
{
	if (this->stackPtr != NULL)
	{
		delete[] stackPtr; 
	}
	num = 0;
}


template <typename T>
inline void TStack<T>::put(const T& value)
{
	if (num > size - 1 || num < 0)
	{
		throw  logic_error("ERROR");
	}

	stackPtr[num++] = value; 
}


template <typename T>
inline T TStack<T>::deleteElem()
{
	if (num < NULL)
	{
		throw  logic_error("ERROR");
	}

	stackPtr[--num]; 

	return stackPtr[num];
}


template <class T>
inline const T& TStack<T>::Peek(int Elem) const
{
	if (Elem > num)
	{
		throw  logic_error("ERROR");
	}
	return stackPtr[num - Elem]; 
}


template <typename T>
inline int TStack<T>::getStackSize() const
{
	return size;
}


template <typename T>
inline T* TStack<T>::getPtr() const
{
	return stackPtr;
}


template <typename T>
inline int TStack<T>::getNum() const
{
	return num;
}


template<typename T>
inline int TStack<T>::max_elem()
{
	int res = stackPtr[0];
	for (int i = 1; i < size; i++)
	{
		if (stackPtr[i] > res)
		{
			res = stackPtr[i];
		}
	}
	return res;
}


template<typename T>
inline int TStack<T>::min_elem()
{
	int res = stackPtr[0];
	for (int i = 1; i < size; i++)
	{
		if (stackPtr[i] < res)
		{
			res = stackPtr[i];
		}
	}
	return res;
}

#endif