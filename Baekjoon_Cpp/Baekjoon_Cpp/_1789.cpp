#define baekjoon1789 0
#if baekjoon1789

#include <iostream>

int main()
{
	long long s;
	std::cin >> s;

	long long sum = 0;
	long long i = 1;
	while (true)
	{
		sum += i;

		if (sum > s)
		{
			std::cout << i - 1;
			break;
		}
		else if (sum == s)
		{
			std::cout << i;
			break;
		}

		i++;
	}

	return 0;
}

#endif