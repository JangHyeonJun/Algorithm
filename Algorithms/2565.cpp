//#include <iostream>
//
//using namespace std;
//
//
//short dp[501][2];
//
//int main()
//{
//	short n;
//	short removeNum = 0;
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		short A, B;
//		cin >> A >> B;
//		dp[A][0] = B;
//	}
//	for (int i = 0; i < 501; i++)
//	{
//		// ����� �������� ���� ���
//		if (dp[i][0] > 0)
//		{
//			for (int j = 0; j < 501; j++)
//			{
//				// �ڽ��� �����ϰ�
//				if (i != j)
//				{
//					// �ڽź��� ���� ��ȣ(A)���� ���� ��ȣ(B)�� ����Ǹ� �����ȴٴ� ��
//					if (i > j && dp[j][0] != 0 && dp[j][0] > dp[i][0])
//						dp[i][1]++;
//					
//					// �ݴ��� ���
//					if (i < j && dp[j][0] != 0 && dp[j][0] < dp[i][0])
//						dp[i][1]++;
//				}
//			}
//		}
//	}
//	return 0;
//}