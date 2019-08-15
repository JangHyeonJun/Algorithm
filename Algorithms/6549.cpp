//#include <iostream>
//#include <vector>
//
//using namespace std;
//typedef long long ll;
//
//void init(vector<int> &arr, vector<int> &tree, int node, int start, int end)
//{
//	// start�� end �� ������ ���� ���(leaf node)�̹Ƿ�, index�� �־��ش�.
//	if (start == end)
//		tree[node] = start;
//	else
//	{
//		int mid = (start + end) / 2;
//		init(arr, tree, node * 2, start, mid); // ���� �ڽ� ����� �ε����� node * 2
//		init(arr, tree, node * 2 + 1, mid + 1, end); // ������ �ڽ� ����� �ε����� node * 2 + 1
//
//		// �ڽ� ����� ���̸� ���Ͽ� �ּ� ���̸� ������ �ε����� ��忡 ����
//		if (arr[tree[node * 2]] <= arr[tree[node * 2 + 1]])
//			tree[node] = tree[node * 2];
//		else
//			tree[node] = tree[node * 2 + 1];
//	}
//}
//
//// Ư�� �������� �ּ� ���̸� ������ �ε����� ã�� �Լ�
//int query(vector<int> &arr, vector<int> &tree, int node, int start, int end, int left, int right)
//{
//	// ã������ ������ �ʰ��Ͽ��� ���
//	if (left > end || right < start)
//		return -1;
//	// ã������ ���� �ȿ� start, end �� ���� ���
//	// ���� �ȿ� ���ԵǴ� ����̹Ƿ�
//	if (left <= start && end <= right)
//		return tree[node];
//
//	int mid = (start + end) / 2;
//	int m1 = query(arr, tree, node * 2, start, mid, left, right);
//	int m2 = query(arr, tree, node * 2 + 1, mid + 1, end, left, right);
//
//	// ���� �ڽ� ���(m1)�� ������ ���� ���� ��� ������ ���� ��� ����̹Ƿ�
//	// m2�� ��ȯ�Ѵ�. �ݴ뵵 ��������
//	if (m1 == -1)
//		return m2;
//	else if (m2 == -1)
//		return m1;
//	else
//	{
//		// ���� �ڽ� ��尡 ������ �� ��� �� �߿� �ּ��� ���̸� ������ �ε����� ��ȯ�Ѵ�.
//		if (arr[m1] <= arr[m2])
//			return m1;
//		else
//			return m2;
//	}
//}
//
//// �ִ� ���̸� ������ ���簢���� ã�� �Լ�
//// �������� ������� ���� ū ���簢���� ã�Ƴ���.
//ll getMax(vector<int> &arr, vector<int> &tree, int start, int end)
//{
//	int n = arr.size();
//	int m = query(arr, tree, 1, 0, n - 1, start, end);
//
//	// �������� ���� �� ���簢�� ���� ���
//	ll area = (ll)(end - start + 1)*(ll)arr[m];
//
//	if (start <= m - 1)
//	{
//		ll tmp = getMax(arr, tree, start, m - 1);
//		if (area < tmp)
//			area = tmp;
//	}
//	if (m + 1 <= end)
//	{
//		ll tmp = getMax(arr, tree, m + 1, end);
//		if (area < tmp)
//			area = tmp;
//	}
//	return area;
//}
//
//int main()
//{
//	while (true)
//	{
//		int n;
//		cin >> n;
//
//		if (n == 0)
//			break;
//
//		vector<int> arr(n);
//
//		for (int i = 0; i < n; i++)
//			cin >> arr[i];
//
//		vector<int> tree(n * 4);
//
//		init(arr, tree, 1, 0, n - 1);
//		
//		cout << getMax(arr, tree, 0, n - 1) << '\n';
//	}
//
//	return 0;
//}