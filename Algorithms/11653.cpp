//#include <iostream>
//#include <math.h>
//
//int main()
//{
//	int n;
//	std::cin >> n;
//
//	if (n == 1)
//	{
//		return 0;
//	}
//
//	int maxPrime = (int)sqrt((double)n) + 1;
//	bool *eratos = new bool[n+2];
//	int prime = 2;
//	
//	for (int i = 0; i < n; i++)
//		eratos[i] = true;
//
//	while (prime <= maxPrime)
//	{
//		if (eratos[prime])
//		{
//			for (int i = prime*2; i < maxPrime; i += prime)
//			{
//				eratos[i] = false;
//			}
//		}
//		prime++;
//	}
//
//	prime = 2;
//	while (n > 1)
//	{
//		if (eratos[prime] && n % prime == 0)
//		{
//			std::cout << prime << '\n';
//			n /= prime;
//		}
//		else
//			prime++;
//	}
//
//	delete[] eratos;
//
//	return 0;
//}