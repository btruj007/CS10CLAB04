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

	}

	void pop_two() {

	}

	T top() {
		if (size > 0)
		{
			return data[20 - size];
		}
		else
		{
			return null;
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
