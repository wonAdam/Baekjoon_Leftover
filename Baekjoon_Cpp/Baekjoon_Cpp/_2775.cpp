//#include <iostream>
//
//int room[15][15] = { 0 };
//
//int solution(int k, int n)
//{
//	if (room[k][n] != 0)
//		return room[k][n];
//
//	for (int i = 1; i <= k; i++)
//	{
//		for (int j = 2; j <= n; j++)
//		{
//			room[i][j] = room[i][j - 1] + room[i - 1][j];
//		}
//	}
//
//	return room[k][n];
//}
//
//int main()
//{
//	for (int i = 0; i < 15; i++)
//	{
//		room[0][i] = i;
//	}
//
//	for (int i = 0; i < 15; i++)
//	{
//		room[i][0] = 0;
//		room[i][1] = 1;
//	}
//
//	int t;
//	std::cin >> t;
//
//	for (int i = 0; i < t; i++)
//	{
//		int k, n;
//		std::cin >> k;
//		std::cin >> n;
//
//		std::cout << solution(k, n) << std::endl;
//	}
//
//	return 0;
//}