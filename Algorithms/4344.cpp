///* 
//float �� ������ ��Ȯ���� �ſ� ���� ������ �˰��� Ǯ�̿����� ������� �� ��
//precision �� �ڸ���(������+�Ҽ���)�� �������ִ� �Լ�
//fixed �� ���� �Ҽ����� �ڸ����� ������ �� �ֵ��� ���ָ�
//showpoint�� ���� 0���ڸ��� ������ ����ϰ� ���ش�
//*/
//
//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	int C;
//	int N;
//	
//	double count;
//	double sum;
//
//	cin >> C;
//
//	for (int i = 0; i < C; i++)
//	{
//		int score[1001];
//		cin >> N;
//		count = 0;
//		sum = 0.f;
//		for (int j = 0; j < N; j++)
//		{
//			cin >> score[j];
//			sum += score[j];
//		}
//		for (int j = 0; j < N; j++)
//		{
//			if (score[j] > (sum / N))
//				count++;
//		}
//		cout.precision(3);
//		cout << fixed << showpoint << (count / N) * 100 << '%' << '\n';
//	}
//
//	return 0;
//}