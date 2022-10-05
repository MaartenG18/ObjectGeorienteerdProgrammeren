#include <string>

class Stack
{
public:
	Stack(); // default constructor
	Stack(int stacksize); // specific constructor

	void push(std::string item); // Method to put someting on the stack
	void pop(); // Method to pop the last item of the stack
	void print(); // Method to print all the items of the stack, mainly to check if it works

private:
	int m_stackSize;
	int m_stackTop;
	std::string m_stack[];

	void setStackTop(int top); // setter
	void setStackSize(int size); // setter
	void init(int size); // setter

	int stackTop(); // getter
	int stackSize(); // getter
	std::string* stackArray(); // getter

	bool is_empty(); // Method to check if the stack is empty
	bool is_full(); // Method to check if the stack is full
	void stackResize(); // Method to make the stack bigger
};