#include <iostream>

using namespace std;

// �켱 �迭�� ���� �����ϰ� int�� ������ ���� ����
class Stack
{
	int _data[10000];
	int _size;
	int _top;

public:
	Stack();
	void push(int input);
	int pop();
	void size();
	bool empty();
	int top();
};
Stack::Stack()
{
	for (int i = 0; i < sizeof(_data) / sizeof(int); i++)
		_data[i] = 0;
	_size = 0;
	_top = -1;
}
void Stack::push(int input)
{
	_size++;
	_top++;
	_data[_top] = input;
}
int Stack::pop

int main()
{
	
	return 0;
}