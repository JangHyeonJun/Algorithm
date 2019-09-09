#include <iostream>
#include <vector>
#include <queue>

using namespace std;

#define INT_MAX 2147483647 / 2
typedef pair<int, int> ii;

vector<vector<int>> graph;
int node = 6;
vector<vector<int>> edge{ {1,2,2}, {1,3,5}, {1,4,1},
{2,4,2}, {2,3,3}, {3,4,3}, {3,5,1}, {3,6,5}, {4,5,1}, {5,6,2} };

vector<int> dijkstra(int start = 0)
{
	int callcount = 0;
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
		if (dist > d[current])
			continue;

		for (int i = 0; i < node; i++)
		{	
			if (graph[current][i] == INT_MAX)
				continue;
			if (d[i] > dist + graph[current][i])
			{
				callcount++;
				d[i] = dist + graph[current][i];
				pq.push(make_pair(d[i], i));
			}
		}
		cout << "Call Count: " << callcount << endl;
	}
	return d;
}

int main()
{
	graph.assign(node, vector<int>(node, INT_MAX));
	// edge���� ���1, ���2, ����ġ(���)�� ���ʴ�� ������

	for (int i = 0; i < node; i++)
		graph[i][i] = 0;
	for (int i = 0; i < edge.size(); i++)
	{
		int u = edge[i][0] - 1;
		int v = edge[i][1] - 1;
		int w = edge[i][2];
		graph[u][v] = graph[v][u] = w;
		// ������ �׷��� �� ��� graph[v][u] = w �� �߰�
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