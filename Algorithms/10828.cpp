#include <iostream>
#include <string>
#include "arrayStack.h"
using namespace std;

// �켱 �迭�� ���� �����ϰ� int�� ������ ���� ����


int main()
{
	Stack stack_i;
	string command;
	int N, num;

	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> command;
		if (command == "push")
		{
			cin >> num;
			stack_i.push(num);
		}
		else if (command == "pop")
			stack_i.pop();
		else if (command == "size")
			stack_i.size();
		else if (command == "empty")
			stack_i.empty();
		else if (command == "top")
			stack_i.top();
	}

	return 0;
}