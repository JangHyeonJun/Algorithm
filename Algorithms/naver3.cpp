///*
//���ڿ��� �־������� ����������� �����ϱ�����
//�������ϴ� ���� ���� ������ ���ڸ� �����϶�.
//
//*/
//// you can use includes, for example:
//// #include <algorithm>
//
//// you can write to stdout for debugging purposes, e.g.
//// cout << "this is a debug message" << endl;
//#include <vector>
//#include <algorithm>
//#include <string>
//
//using namespace std;
//
//int solution(string &S) {
//	// write your code in C++14 (g++ 6.2.0)
//	vector<char> sorted;
//	for (int i = 0; i < S.length(); i++)
//	{
//		if (sorted.empty())
//			sorted.push_back(S[i]);
//		else
//		{
//			if (sorted.back() <= S[i])
//				sorted.push_back(S[i]);
//			else
//				*lower_bound(sorted.begin(), sorted.end(), S[i]) = S[i];
//		}
//	}
//	return S.length() - sorted.size();
//}
//
//
//
//int main()
//{
//	string s = "abczabcde";
//	solution(s);
//}
//
////'a'
////'cba'
////'abcdefghijklmnopqrstuvwxyz'
////'abab'
////'baaaaaaaaab'
////'abcdzefgz'
////'abcdezabc'
////'abczabcdef'