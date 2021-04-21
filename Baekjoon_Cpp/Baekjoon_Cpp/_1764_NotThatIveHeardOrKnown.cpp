//#include <iostream>
//#include <stack>
//#include <queue>
//
//int main()
//{
//	int n, m;
//	std::cin >> n >> m;
//
//	std::priority_queue<std::string> list;
//	for (int i = 0; i < n; i++)
//	{
//		std::string name;
//		std::cin >> name;
//		list.push(name);
//	}
//
//	for (int i = 0; i < m; i++)
//	{
//		std::string name;
//		std::cin >> name;
//		list.push(name);
//	}
//
//	std::stack<std::string> answer;
//	std::string prev = list.top();
//	while (list.size() > 0)
//	{
//		if (prev == list.top())
//		{
//			answer.push(prev);
//			list.pop();
//		}
//		else {
//			prev = list.top();
//		}
//
//		if(list.size() > 0)
//			list.pop();
//	}
//
//	if (answer.size() == 0) {
//		std::cout << 0 << std::endl;
//		return 0;
//	}
//
//	std::cout << answer.size() << std::endl;
//	while (answer.size() > 0)
//	{
//		std::cout << answer.top() << std::endl;
//		answer.pop();
//	}
//
//	return 0;
//}