//#include <iostream>
//#include <string>
//#include <queue>
//
//using namespace std;
//
//
//int main()
//{
//	int n;
//	queue<int> q;
//	string command;
//	cin >> n;
//	
//	for (int i = 0; i < n; i++)
//	{
//		cin >> command;
//		if (command == "push")
//		{
//			int num;
//			cin >> num;
//			q.push(num);
//		}
//		else if (command == "pop")
//		{
//			if (q.empty())
//				cout << -1 << '\n';
//			else
//			{
//				cout << q.front() << '\n';
//				q.pop();
//			}
//		}
//		else if (command == "size")
//		{
//			cout << q.size() << '\n';
//		}
//		else if (command == "empty")
//		{
//			if (q.empty())
//				cout << 1 << '\n';
//			else
//				cout << 0 << '\n';
//		}
//		else if (command == "front")
//		{
//			if (q.empty())
//				cout << -1 << '\n';
//			else
//			{
//				cout << q.front() << '\n';
//			}
//		}
//		else if (command == "back")
//		{
//			if (q.empty())
//				cout << -1 << '\n';
//			else
//			{
//				cout << q.back() << '\n';
//			}
//		}
//	}
//	return 0;
//}