//#include <string>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//// ����ü ������ ����ִ°� �����غ��� �;���.
//struct Compare
//{
//	bool operator()(int a, int b)
//	{
//		string s1 = to_string(a);
//		string s2 = to_string(b);
//
//		return s1 + s2 > s2 + s1;
//	}
//};
//
//void MySwap(int& a, int& b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//
//// �����Ϸ��� ���� QuickSort ���� �ߴµ�.. ���ɸ� ����ż�.. �ϴ� �н�
//void MySort(vector<int>& v, int low, int high, Compare cmp)
//{
//	if (low >= high)
//		return;
//
//	int left = low;
//	int right = high;
//	int mid = (low + high) / 2;
//
//	while (left < right)
//	{
//		if (cmp(v[left], v[mid]))
//			left++;
//		else if (cmp(v[mid], v[right]))
//			right--;
//		else
//		{
//			MySwap(v[left], v[right]);
//			left++;
//			right--;
//		}
//	}
//
//	MySort(v, low, right, cmp);
//	MySort(v, right + 1, high, cmp);
//}
//
//string solution(vector<int> numbers) {
//	string answer = "";
//	Compare c;
//	sort(numbers.begin(), numbers.end(), c);
//
//	if (numbers[0] == 0)
//		return "0";
//
//	for(auto& n : numbers)
//		answer += to_string(n);
//
//	return answer;
//}
//
//int main()
//{
//	Compare c;
//	vector<int> v3 = { 3, 30, 34, 5, 9 };
//	vector<int> v2 = { 5,40,92,3,9 };
//	vector<int> v1 = { 5,4,2,3,1};
//	string s = solution(v3);
//	return 0;
//}