#include "Stack.h"
#include <string.h>
#include <iostream>

// ----- Constructors -----

Stack::Stack() // default constructor makes a stack with 5 elements
{
	setStackSize(5);
	init(5);
	setStackTop(-1);
}

Stack::Stack(int size)
{
	setStackSize(size);
	init(size);
	setStackTop(-1);
}


// ----- Methods -----

bool Stack::is_empty() // Method to check if the stack is empty
{ 
	if (stackTop() == -1) 
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool Stack::is_full() 
{
	if (stackTop() == stackSize() - 1)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void Stack::push(std::string item)
{
	if (!is_full()) 
	{
		setStackTop(stackTop() + 1);
		stackArray()->append(item);
	}
	else
	{
		stackResize();
	}
}

void Stack::pop()
{
	if (!is_empty()) 
	{
		setStackTop(stackTop() - 1);
	}
	else
	{
		std::cerr << "There is no item on the stack to pop";
	}
}

void Stack::print()
{
	if (!is_empty())
	{
		for (int i = 0; i < stackSize(); i++)
		{
			std::cout << stackArray()[i];
		}
	}
}

void Stack::stackResize()
{
	std::cout << "Stack is full";
	//TODO implement the right way
}


// ----- Setters -----

void Stack::init(int size)
{
	m_stack[size];
}

void Stack::setStackSize(int size)
{
	m_stackSize = size;
}

void Stack::setStackTop(int top)
{
	m_stackTop = top;
}

// ----- Getter -----

int Stack::stackSize()
{
	return m_stackSize;
}

int Stack::stackTop()
{
	return m_stackTop;
}

std::string* Stack::stackArray()
{
	return m_stack;
}

