//#include<iostream>
//#include<math.h>
//using namespace std;
//
//int main()
//{
//	int T;
//	int x1, y1, r1, x2, y2, r2;
//
//	cin >> T;
//	for (int i = 0; i < T; i++)
//	{
//		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
//		
//		// ������ �Լ� sqrt�� ��ȯ�ϴ� double�� �ε��Ҽ��� ���� ����Ȯ���� ���ֱ� ���� �Ÿ��� ���� ������ ��� �������� ����� 
//		int dist = ((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1));
//		int sum = (r1 + r2)*(r1 + r2);
//		int diff = 0;
//		if (r1 > r2)
//			diff = (r1 - r2)*(r1 - r2);
//		else
//			diff = (r2 - r1)*(r2 - r1);
//
//		if (dist == 0 && r1 == r2)
//			cout << -1;
//		else if (dist > sum || dist < diff)
//			cout << 0;
//		else if (dist == sum || (dist == diff && dist != 0))
//			cout << 1;
//		else if (dist < sum && dist > diff)
//			cout << 2;
//
//		cout << '\n';
//	}
//}