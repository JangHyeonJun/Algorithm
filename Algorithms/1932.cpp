//#include <iostream>
//
//using namespace std;
//
//// ���������� �����ع����� Stack �κп� �޸𸮸� ���� �����ϰԵǾ�
//// Stack Overflow�� �߻��Ѵ�. ������ �޸�ũ��� ��ü�� 1MB ���ܷ� �Ǿ��ִ�.
//int dp[500][500];
//short triangleSize[500][500];
//
//int main()
//{
//	int n;
//	int max = -1;
//	cin >> n;
//	
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < i + 1; j++)
//			cin >> triangleSize[i][j];
//	}
//
//	dp[0][0] = triangleSize[0][0];
//
//	for (int i = 1; i < n; i++)
//	{
//		dp[i][0] = dp[i - 1][0] + triangleSize[i][0];
//		dp[i][i] = dp[i - 1][i - 1] + triangleSize[i][i];
//		for (int j = 1; j < i; j++)
//		{
//			if (dp[i - 1][j - 1] >= dp[i - 1][j])
//				dp[i][j] = dp[i - 1][j - 1] + triangleSize[i][j];
//			else
//				dp[i][j] = dp[i - 1][j] + triangleSize[i][j];
//		}
//	}
//
//	for (int i = 0; i < n; i++)
//		if (dp[n-1][i] > max)
//			max = dp[n-1][i];
//
//	cout << max;
//
//	return 0;
//}