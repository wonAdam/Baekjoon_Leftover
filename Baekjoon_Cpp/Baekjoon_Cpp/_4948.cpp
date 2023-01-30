#define baekjoon4948 0
#if baekjoon4948

#include <iostream>
#include <vector>

#define MAX_N 123'456

#define OUT
#define IN

class Eratos
{
public:
	Eratos(int max)
		: isPrime(static_cast<size_t>(max + 1), true)
	{
		if (isPrime.size() > 2)
		{
			isPrime[0] = false;
			isPrime[1] = false;
		}

		for (int i = 2; i * i <= max; ++i)
		{
			if (isPrime[i] == true && IsPrimeNumber_Constructor(i) == true)
			{
				isPrime[i] = true;
				for (int j = i * 2; j <= max; j += i)
				{
					isPrime[j] = false;
				}
			}
			else
			{
				isPrime[i] = false;
			}
		}
	}

	bool IsPrimeNumber(int n)
	{
		return isPrime[n];
	}

private:
	bool IsPrimeNumber_Constructor(int n)
	{
		bool bIsPrime = true;
		// 0 and 1 are not prime numbers
		if (n == 0 || n == 1) {
			bIsPrime = false;
		}

		// loop to check if n is prime
		for (int i = 2; i <= n / 2; ++i) {
			if (n % i == 0) {
				bIsPrime = false;
				break;
			}
		}

		return bIsPrime;
	}

	std::vector<bool> isPrime;
};

bool GetInput(int& outInput)
{
	int input;
	std::cin >> input;
	outInput = input;
	return input != 0;
}

int main()
{
	Eratos eratos(MAX_N * 2);

	int input;
	while (GetInput(OUT input))
	{
		int count = 0;
		for (int i = input + 1; i <= input * 2; ++i)
			if (eratos.IsPrimeNumber(i) == true)
				count++;

		std::cout << count << '\n';
	}

	return 0;
}

#endif
