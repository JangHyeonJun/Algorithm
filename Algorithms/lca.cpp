//#include <iostream>
//#include <vector>
//
//using namespace std;
///*
//LCA(Lowest Common Ancestor) �˰���
//�ּ� ���� ����
//
//Ʈ���� ���� u, v�� �־��� �� u, v�� ������ ������
//�θ� ��带 ã�� ��
//*/
//
//int getDepth(int index)
//{
//	index++;
//	int depth = 0;
//	int n = 2;
//	while (index >= n)
//	{
//		n *= 2;
//		depth++;
//	}
//	return depth;
//}
//int getParent(int index)
//{
//	return index == 0 ? 0 : (index + 1) / 2 - 1;
//}
//
//int getLCA(int u, int v)
//{
//	while (true)
//	{
//		int depth_u = getDepth(u);
//		int depth_v = getDepth(v);
//		if (depth_u == depth_v)
//		{
//			if (getParent(u) == getParent(v))
//				return getParent(u);
//			else
//			{
//				u = getParent(u);
//				v = getParent(v);
//			}
//		}
//		else
//		{
//			if (depth_u < depth_v)
//				v = getParent(v);
//			else
//				u = getParent(u);
//		}
//	}
//}
//
//int main()
//{
//	cout << "0�� 3�� LCA��? : " << getLCA(0, 3) << endl;
//	cout << "5�� 6�� LCA��? : " << getLCA(5, 6) << endl;
//	cout << "10�� 3�� LCA��? : " << getLCA(10, 3) << endl;
//}