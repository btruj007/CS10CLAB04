#include <iostream>
#include <string>
#include <stdexcept>

using namespace std;

template<typename T>
class stack 
{
private:
	T data;
	int size;

public:
	stack();
	void push(T val);
	void pop();
	void pop_two();
	T top();
	void empty();

};
