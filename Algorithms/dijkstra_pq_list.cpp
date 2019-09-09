#include <iostream>
#include <vector>
#include <queue>

using namespace std;

#define INT_MAX 2147483647 / 2
typedef pair<int, int> ii;


int node = 6;
vector<vector<ii>> list;
vector<vector<int>> edge{ {1,2,2}, {1,3,5}, {1,4,1},
{2,4,2}, {2,3,3}, {3,4,3}, {3,5,1}, {3,6,5}, {4,5,1}, {5,6,2} };

vector<int> dijkstra(int start = 0)
{
	vector<int> d(node, INT_MAX);
	priority_queue<ii, vector<ii>, greater<ii>> pq;

	d[start] = 0;
	pq.push(make_pair(d[start], start));


	while (!pq.empty())
	{
		int dist = pq.top().first;
		int current = pq.top().second;
		pq.pop();

		// ť�� ��� �� �߿� ���� ��忡 ���� dist�� �ּ� ���� �ƴѵ���
		// ����ִ� ���� �Ʒ� for���� ���� ���ϵ��� ����ó���Ѵ�.
		// �Ʒ� ���ǹ��� ������ �� ť�� ���� push�ϴ� Ƚ���� �����ϰԵȴ�.
		if (dist > d[current])
			continue;

		// node�� ������ n,, edge�� ������ e��� �ϰ�
		// ������ ���� ���� ���(graph)�� �˰����� �����ϸ� �ð����⵵ O(nlogn) / �������⵵ O(n^2) 
		// ���� ����Ʈ(edge)�� �˰����� �����ϸ� �ð����⵵ O(elogn) / �������⵵ O(V+E)�� �ȴ�.
		for (int i = 0; i < list[current].size(); i++)
		{
			int nextDist = list[current][i].first;
			int next = list[current][i].second;
			if (d[next] > dist + nextDist)
			{
				d[next] = dist + nextDist;
				pq.push(make_pair(d[next], next));
			}
		}
	}
	return d;
}

int main()
{
	list.assign(node, vector<ii>());
	for (int i = 0; i < edge.size(); i++)
	{
		int u = edge[i][0] - 1;
		int v = edge[i][1] - 1;
		int w = edge[i][2];
		list[u].push_back(make_pair(w, v));
		list[v].push_back(make_pair(w, u));
	}

	for (int i = 0; i < node; i++)
	{
		vector<int> d = dijkstra(i);
		cout << i + 1 << "��° ����� �ּ� �Ÿ��� ";
		for (int j = 0; j < d.size(); j++)
			cout << d[j] << ' ';
		cout << endl;
	}

	return 0;
}