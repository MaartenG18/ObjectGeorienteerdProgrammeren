#include <string>

class Stack
{
public:
	Stack(); // default constructor
	Stack(int stacksize); // specific constructor
	~Stack();

	void push();
	void pop(std::string item);
	
private:
	void init();
	void print();
	bool is_empty();
	bool is_full();

	int m_stacksize;
	int m_top;
};