//#include <iostream>
//#include <vector>
//#include <queue>
//#include <unordered_map>
//#include <stack>
//using namespace std;
//
//#define INT_MAX 2147483647 / 2
//typedef pair<int, int> ii;
//
//
//int node = 6;
//vector<vector<ii>> adj_list;
//vector<vector<int>> edge{ {1,2,2}, {1,3,5}, {1,4,1},
//{2,4,2}, {2,3,3}, {3,4,3}, {3,5,1}, {3,6,5}, {4,5,1}, {5,6,2} };
//
//void findPath(unordered_map<int, int>& _path, int start, int dest)
//{
//	stack<ii> s;
//	while (true)
//	{
//		if (_path.find(dest) == _path.end())
//		{
//			cout << "��ΰ� �����ϴ�";
//			break;
//		}
//		if (_path[dest] == start)
//		{
//			s.push(make_pair(start, dest));
//			break;
//		}
//
//		s.push(make_pair(_path[dest], dest));
//		dest = _path[dest];
//	}
//	while (!s.empty())
//	{
//		cout << '[' << s.top().first << ',' << s.top().second << "] ";
//		s.pop();
//	}
//
//	cout << endl;
//}
//
//vector<int> dijkstra(int start = 0, int dest = 5)
//{
//	vector<int> d(node, INT_MAX);
//	priority_queue<ii, vector<ii>, greater<ii>> pq;
//	unordered_map<int,int> path;
//
//	d[start] = 0;
//	pq.push(make_pair(d[start], start));
//
//
//	while (!pq.empty())
//	{
//		int dist = pq.top().first;
//		int current = pq.top().second;
//		pq.pop();
//
//		// ť�� ��� �� �߿� ���� ��忡 ���� dist�� �ּ� ���� �ƴѵ���
//		// ����ִ� ���� �Ʒ� for���� ���� ���ϵ��� ����ó���Ѵ�.
//		// �Ʒ� ���ǹ��� ������ �� ť�� ���� push�ϴ� Ƚ���� �����ϰԵȴ�.
//		if (dist > d[current])
//			continue;
//
//		// node�� ������ n,, edge�� ������ e��� �ϰ�
//		// ������ ���� ���� ���(graph)�� �˰����� �����ϸ� �ð����⵵ O(nlogn) / �������⵵ O(n^2) 
//		// ���� ����Ʈ(edge)�� �˰����� �����ϸ� �ð����⵵ O(elogn) / �������⵵ O(V+E)�� �ȴ�.
//		for (int i = 0; i < adj_list[current].size(); i++)
//		{
//			int nextDist = adj_list[current][i].first;
//			int next = adj_list[current][i].second;
//			if (d[next] > dist + nextDist)
//			{
//				d[next] = dist + nextDist;
//				pq.push(make_pair(d[next], next));
//				path[next] = current;
//			}
//		}
//	}
//
//	findPath(path, start, dest);
//
//	return d;
//}
//
//int main()
//{
//	adj_list.assign(node, vector<ii>());
//	for (int i = 0; i < edge.size(); i++)
//	{
//		int u = edge[i][0] - 1;
//		int v = edge[i][1] - 1;
//		int w = edge[i][2];
//		adj_list[u].push_back(make_pair(w, v));
//		adj_list[v].push_back(make_pair(w, u));
//	}
//
//	for (int i = 0; i < node; i++)
//	{
//		vector<int> d = dijkstra(i, 5);
//		cout << i + 1 << "��° ����� �ּ� �Ÿ��� ";
//		for (int j = 0; j < d.size(); j++)
//			cout << d[j] << ' ';
//		cout << endl;
//	}
//
//	return 0;
//}