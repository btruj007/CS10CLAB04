#include <iostream>
#include <string>
#include <stdexcept>

using namespace std;

const int MAX_SIZE = 20;

template<typename T>
class stack 
{
private:
	T data[MAX_SIZE];
	int size;

public:
	stack(){
		size = 0;
	}

	void push(T val){
		if (size < 20)
		{
			size++;
			data[20 - size] = val;
		}
		else
		{
			throw overflow_error("Called push on full stack.");
		}
	}

	void pop(){
		if (size > 0)
		{
			data[20 - size] = null;
			size--;
		}
		else
		{
			throw out_of_range("Called pop on empty stack.");
		}
	}

	void pop_two() {
		if (size > 1)
		{
			data[20 - size] = null;
			size--;

			data[20 - size] = null;
			size--;
		}
		else if (size == 1)
		{
			throw out_of_range("Called pop_two on a stack of size 1.");
		}
		else
		{
			throw out_of_range("Called pop_two on empty stack.");
		}
	}

	T top() {
		if (size > 0)
		{
			return data[20 - size];
		}
		else
		{
			throw underflow_error("Called top on empty stack.");
		}
	}

	bool empty() {
		if (size == 0)
		{
			return true;
		}

		return false;
	}

};
