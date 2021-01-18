//#include <bits/stdc++.h>
//
//using namespace std;
//
//string ltrim(const string&);
//string rtrim(const string&);
//vector<string> split(const string&);
//
//
///*
// * Complete the 'minMoves' function below.
// *
// * The function is expected to return an INTEGER.
// * The function accepts following parameters:
// *  1. 2D_INTEGER_ARRAY maze
// *  2. INTEGER x
// *  3. INTEGER y
// */
//typedef pair<int, int> II;
//typedef pair<int, pair<int, int>> III;
//const int dy[4] = { -1, 1, 0, 0 }; // up, down, left, right
//const int dx[4] = { 0, 0, -1, 1 };
//int node_size = 0;
//vector<int> parent;
//
//void initUnion(int size)
//{
//	parent.assign(size, 0);
//	for (int i = 0; i < size; i++)
//		parent[i] = i;
//}
//int find(int n)
//{
//	if (n == parent[n])
//		return n;
//	return parent[n] = find(parent[n]);
//}
//void merge(int u, int v)
//{
//	u = find(u);
//	v = find(v);
//	if (u == v)
//		return;
//	else
//		parent[v] = u;
//}
//
//struct pair_hash
//{
//	template <class T1, class T2>
//	size_t operator() (const pair<T1, T2>& p) const {
//		return hash<T1>()(p.first) ^ hash<T2>()(p.second);
//	}
//};
//
//struct POS {
//	int x, y, dist;
//	POS(int _x, int _y, int _dist) :x(_x), y(_y), dist(_dist) {}
//};
//
//void swap(int& x, int& y)
//{
//	int tmp = move(x);
//	x = move(y);
//	y = move(tmp);
//}
//
//unordered_map<II, int, pair_hash> makeEdges(const vector<vector<int>>& maze, int x, int y)
//{
//	int max_y = maze.size();
//	int max_x = maze[0].size();
//
//	unordered_multimap<II, int, pair_hash> node; // node_index
//	node.insert(make_pair(II(0, 0), 0));
//	int node_index = 1;
//	for (int i = 0; i < max_y; i++)
//		for (int j = 0; j < max_x; j++)
//			if (maze[i][j] == 2)
//				node.insert(make_pair(II(j, i), node_index++));
//	node.insert(make_pair(II(x, y), node_index));
//	node_size = node.size();
//
//	unordered_map<II, int, pair_hash> edges; // II(u, v) : node_index, node_index, dist
//
//	for (auto iter = node.begin(); iter != node.end(); iter++)
//	{
//		vector<vector<bool>> visited(max_y, vector<bool>(max_x, false));
//
//		queue<POS> q;
//		visited[iter->first.second][iter->first.first] = true;
//		q.push(POS(iter->first.first, iter->first.second, 0));
//
//		while (!q.empty())
//		{
//			POS p = q.front();
//			q.pop();
//
//
//			if (node.find(II(p.x, p.y)) != node.end())
//			{
//				auto lower = node.equal_range(II(p.x, p.y)).first;
//				auto upper = node.equal_range(II(p.x, p.y)).second;
//				for (; lower != upper; lower++)
//				{
//					int u = iter->second;
//					int v = lower->second;
//					if (u > v)
//						swap(u, v);
//					if (u != v)
//						edges[II(u, v)] = p.dist;
//				}
//			}
//
//			for (int j = 0; j < 4; j++)
//			{
//				int n_y = p.y + dy[j];
//				int n_x = p.x + dx[j];
//				if (n_x < max_x && n_x >= 0 &&
//					n_y < max_y && n_y >= 0 &&
//					maze[n_y][n_x] != 1 && !visited[n_y][n_x])
//				{
//					visited[n_y][n_x] = true;
//					q.push(POS(n_x, n_y, p.dist + 1));
//				}
//			}
//
//		}
//	}
//
//	return edges;
//}
//
//int minMoves(vector<vector<int>> maze, int x, int y)
//{
//	// x = col , y = row
//	int temp = x;
//	x = y;
//	y = temp;
//
//	int min_moves = INT_MAX;
//
//	unordered_map<II, int, pair_hash> edges = makeEdges(maze, x, y);
//
//	// ������ ���� �׷����� �׻� N * (N-1) / 2 ���� ���� ������ ����
//	if (edges.size() != node_size * (node_size - 1) / 2)
//		return -1;
//
//	priority_queue <III, vector<III>, greater<III>> pq_waypoint; // ������
//	vector<III> start_edges, end_edges;
//	for (auto iter = edges.begin(); iter != edges.end(); iter++)
//	{
//		int u = iter->first.first;
//		int v = iter->first.second;
//		int dist = iter->second;
//		if (u == 0 || v == 0)
//			start_edges.push_back(III(dist, II(u, v)));
//		else if (u == node_size - 1 || v == node_size - 1)
//			end_edges.push_back(III(dist, II(u, v)));
//		else
//			pq_waypoint.push(III(dist, II(u, v)));
//	}
//
//	for (int i = 0; i < start_edges.size(); i++)
//		for (int j = 0; j < end_edges.size(); j++)
//		{
//			int sum = 0;
//			vector<int> connected(node_size, 0); // ��θ� üũ�ϱ� ���� ����� ���� �� üũ
//			connected[0] = connected[node_size - 1] = 1;
//			initUnion(node_size); // ��ȯ ���Ÿ� ���� ���Ͽ�-���ε� ���
//
//			III start = start_edges[i];
//			III end = end_edges[j];
//			sum = start.first + end.first;
//			connected[start.second.first]++;
//			connected[start.second.second]++;
//			connected[end.second.first]++;
//			connected[end.second.second]++;
//			if (i == 5 && j == 1)
//				int zzz = 1;
//			priority_queue <III, vector<III>, greater<III>> tmp(pq_waypoint);
//			while (!tmp.empty())
//			{
//				III curr = tmp.top();
//				int dist = curr.first;
//				int u = curr.second.first;
//				int v = curr.second.second;
//				tmp.pop();
//
//				if (connected[u] < 2 && connected[v] < 2 && find(u) != find(v))
//				{
//					sum += dist;
//					merge(u, v);
//					connected[u]++;
//					connected[v]++;
//
//					//cout << "[" << u << "," << v << "] : " << dist << endl;
//				}
//			}
//			bool all_connected = true;
//			for (int i = 0; i < connected.size(); i++)
//				if (connected[i] != 2)
//					all_connected = false;
//
//			if (all_connected && sum < min_moves)
//				min_moves = sum;
//		}
//
//
//
//	cout << "x,y : [" << x << ", " << y << "]" << endl;
//	cout << " maze ---- " << endl;
//	cout << maze.size() << endl << maze[0].size() << endl;
//	for (int i = 0; i < maze.size(); i++)
//	{
//		for (int j = 0; j < maze[0].size(); j++)
//		{
//			cout << maze[i][j] << ' ';
//		}
//		cout << endl;
//	}
//	cout << x << endl << y << endl;
//	cout << " connected ---- " << endl;
//	cout << " min_moves ---- " << endl;
//	cout << min_moves << endl;
//
//	return min_moves;
//}
//
//int main()