#define baekjoon1929 0
#if baekjoon1929

#include <iostream>
#include <vector>

int main()
{
	int min; int max;
	std::cin >> min >> max;

	std::vector<bool> primeNumbers;
	for (int i = 0; i <= max; ++i)
		primeNumbers.emplace_back(true);

	// 1 is not a prime number.
	primeNumbers[1] = false;

	// Eratos
	for (int i = 2; i * i <= max; ++i)
	{
		if (primeNumbers[i] == true)
		{
			for (int j = 2; j * i <= max; ++j)
				primeNumbers[j * i] = false;
		}
	}

	for (int i = min; i <= max; ++i)
		if (primeNumbers[i] == true)
			std::cout << i << '\n';

	return 0;
}

#endif