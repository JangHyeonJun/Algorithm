///*
//������� ���� �迭 A�� N���� ������ �������ִ�.
//(P,Q) �� �ε����� ������ �κ� �迭 slice�� �������ִµ�
//slice �� �׻� ���������̾�� �Ѵ�.
//A[i-1] < A[i] �̷�������,
//[2,2,2] �� slice �� �� ����.
//[2] �� slice �����ϸ� size�� 1
//[1,2] �� slice �����ϸ� size�� 3
//[-1,2,3] �� ���� �ϸ� size�� 3
//[-1,2,1] �� �Ұ���
//
//size�� ���� ū slice�� P �ε����� �����ؾ��Ѵ�.
//[2,2,1,2,-1,2] �̸�
//[1,2]�� slice �� �ε��� P = 2
//[-1,2]�� slice �� �ε��� P = 4 �� �ϳ���
//���� �ϸ�ȴ�.
//*/
//
//// you can use includes, for example:
//// #include <algorithm>
//
//// you can write to stdout for debugging purposes, e.g.
//// cout << "this is a debug message" << endl;
//#include <unordered_map>
//#include <string>
//#include <vector>
//
//using namespace std;
//
//int solution(vector<int> &A) {
//	// write your code in C++14 (g++ 6.2.0)
//	int max_size = 1;
//	int max_begin = 0;
//	int begin = -1;
//	int size = 1;
//	for (int i = 0; i < A.size() - 1; i++)
//	{
//		if (A[i] < A[i + 1])
//		{
//			if (begin == -1)
//				begin = i;
//			size++;
//			if (size > max_size)
//			{
//				max_size = size;
//				max_begin = begin;
//			}
//		}
//		else
//		{
//			begin = -1;
//			size = 1;
//		}
//	}
//
//	return max_begin;
//}
//
////[2, 1, 2, 3, 2, 1]
////[1]
////[5, 4, 3, 2, 1, 2, 3, 2, 1, 2, 3]
////[5, 4, 3, 2, 1, 2, 3, 2, 1, 2, 3, 4]
////[1, 2, 3, 1, 2, 3, 4]
////[1, 2, 3, 4, 1, 2]
////[1, 2, 1, 2, 3, 4, 5, 1, 2, 3, 4]
////[5, 1, 2, 3, 1, 2, 3, 1, 2, 3]
////[5, 1, 2, 3, 1, 2, 3, 1, 2, 3, 4, 5]