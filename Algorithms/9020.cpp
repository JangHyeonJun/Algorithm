//#include <iostream>
//#include <string.h>
//
//using namespace std;
//
//bool is_prime_number(int num)
//{
//	if (num < 2)
//		return false;
//	for (int i = 2; i*i <= num; i++)
//		if (num%i == 0)
//			return false;
//	return true;
//}
//
//int main()
//{
//	int T;
//	int N;
//	int end = 1;
//	int part1 = 0, part2 = 0;
//	bool flag[1000001] = { true, };
//	memset(flag, true, sizeof(flag));
//
//	cin >> T;
//	for (int t=0; t<T; t++)
//	{
//		cin >> N;
//		// �����佺�׳׽��� ü�� ����Ͽ� �Ҽ� ã�� Ǯ��
//		for (int i = end; i <= N; i++)
//			if (flag[i])
//				if (is_prime_number(i))
//					for (int j = 2; j <= (N) / i; j++)
//						flag[i*j] = false;
//				else
//					flag[i] = false;
//		if (end < N)
//			end = N;
//		// �Ҽ����� ���� �������� ���� �Ҽ��� �ִ��� Ŀ���ϰ�
//		// ū �Ҽ��� �ִ��� �۾ƾ� �Ѵ�.
//		// ���� �Ҽ��� �ִ��� Ŭ ���� N/2 �̸�
//		// �����Ҽ� + ū�Ҽ� = N �̹Ƿ� ������ ���� ������ �ϼ��ȴ�.
//		for (int i = N/2; i > 1; i--)
//			if (flag[i] && flag[N - i])
//			{
//				cout << i << ' ' << N - i << '\n';
//				break;
//			}
//				
//	}
//
//	return 0;
//}