///*
//�׽�Ʈ�� �� ����ƴ��� Ȯ���ϰ� ������ �����ؾ��Ѵ�
//- ���α׷��� ���� �׽�Ʈ ���̽��� �׽�Ʈ�ȴ�.
//- ��� ����� "OK" , "Wrong~" , "Timelim~" �����θ� ���´�
//- �׽�Ʈ ���̽��� ���ӵ� �ڿ����� ��ȣ�� �Ű��� �׷����� �����ȴ�
//- �׷� ���� ��� �׽�Ʈ ���̽��� "OK" �̾�� ������ �Ű�����.
//- �׽�Ʈ ���̽��� �̸��� [task name] + [group number] �� �̷������
//- ���� group number�� ������ �׽�Ʈ ���̽��� ���ҹ��ڷ� �����ȴ�.
//- ����� �׷��� �� * 100 ������ �׷��� �� ������ ������ �Ű�����
//
//�׽�Ʈ ���̽��� �ִ� 300��
//��� �׽�Ʈ ���̽��� ��Ȯ�� �ѹ��� T�� ����
//�׽�Ʈ �׷��� ���ӵ� �ڿ����� 1���� ��ȣ �Ű�����
//2�� �̻��� ����� �����ϴ� �׷��� ���ҹ��ڷ� �����ȴ� a����
//��� ���� T�� �׽�Ʈ ������ �̸��̴�
//taskname�� ��� �����ϰ� ���ҹ��ڷ� �̷������ 30�� �̳��̴�
//��Ȯ���� �Ű��� �˰��� �ӵ��� �򰡿� �ݿ����Ѵ�
//*/
//
//// you can use includes, for example:
//// #include <algorithm>
//
//// you can write to stdout for debugging purposes, e.g.
//// cout << "this is a debug message" << endl;
//#include <unordered_map>
//#include <vector>
//#include <string>
//using namespace std;
//
//int solution(vector<string> &T, vector<string> &R) {
//	// write your code in C++14 (g++ 6.2.0)
//	unordered_map<string, bool> um;
//	int solved_num = 0;
//	for (int i = 0; i < T.size(); i++)
//	{
//		string test = "";
//		for (int j = T[i].length(); j >= 0; j--)
//		{
//			if (T[i][j] <= '9' && T[i][j] >= '0')
//			{
//				test = T[i].substr(0, j + 1);
//				if (R[i] == "OK")
//				{
//					if (um.find(test) == um.end())
//						um[test] = true;
//				}
//				else
//					um[test] = false;
//			}
//		}
//	}
//
//	for (auto iter = um.begin(); iter != um.end(); iter++)
//		if (iter->second)
//			solved_num++;
//
//	return solved_num * 100 / um.size();
//}
//
//int main()
//{
//	vector<string> T = { "a1","a3","a2","a4b","a4a" };
//	vector<string> R = { "WW","OK","OK","RUT","OK" };
//	vector<string> T2 = { "t1","t2","t3","t4","t5","t6","t7","t8","t9","t10","t11", "t12" };
//	vector<string> R2 = { "OK" , "False" , "OK" , "OK"  ,"OK" ,"OK" ,"OK" ,"OK" ,"OK" ,"OK" ,"OK", "OK" };
//	vector<string> T3 = { "1a","1b","2" };
//	vector<string> R3 = { "OK","NNN","OK" };
//	int num = solution(T3, R3);
//	return 0;
//}
//
////(['test1'], ['OK'])
////(['test1'], ['Wrong answer'])
////(['test1a', 'test1b'], ['OK', 'Wrong answer'])
////(['test1', 'TEST1'], ['OK', 'Wrong answer'])
////(['t1', 't2', 't3', 't4', 't5', 't6', 't7', 't8', 't9', 't10', 't11', 't12'], ['OK', 'OK', 'OK', 'OK', 'OK', 'False', 'OK', 'OK', 'OK', 'OK', 'OK', 'OK'])
////(['1a', '1b', '2', '3'], ['OK', 'nono', 'OK', 'NN'])