//// std::endl 은 개행 문자 출력후 출력 버퍼를 비워주기 때문에 시간이 더 많이 소요된다.
//// 실용 프로그램에서는 오류가 나지 않도록 버퍼를 비워주는 상황과 출력을 반복함으로써
//// 속도가 느려지는 상황을 잘 고려해서 사용해야 한다.
//// 알고리즘 풀이에서는 기본적으로 '\n'을 사용하는 것이 좋다.
//
//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	int N;
//	cin >> N;
//
//	for (int i = 1; i <= N; i++)
//	{
//		cout << i << '\n';
//	}
//
//	return 0;
//}