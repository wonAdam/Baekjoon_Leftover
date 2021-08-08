//#include <iostream>
//#include <sstream>
//
//int main()
//{
//	int t;
//	std::cin >> t;
//
//	for (int i = 0; i < t; i++)
//	{
//
//		int h, w, n;
//		std::cin >> h >> w >> n;
//
//		int floor;
//		int roomNum;
//		if (n % h == 0)
//		{
//			floor = h;
//			roomNum = (n / h);
//		}
//		else
//		{
//			floor = n % h;
//			roomNum = (n / h) + 1;
//		}
//		
//
//		std::stringstream ss;
//		if (roomNum >= 10)
//		{
//			ss << floor << roomNum;
//		}
//		else
//		{
//			ss << floor << 0 << roomNum;
//		}
//
//		std::cout << ss.str() << std::endl;
//	}
//
//	return 0;
//}