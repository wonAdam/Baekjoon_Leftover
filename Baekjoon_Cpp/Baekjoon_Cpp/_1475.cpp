#define baekjoon1475 0
#if baekjoon1475

#include <iostream>
#include <vector>
#include <string> 
#include <algorithm> 

#define OUT
#define IN

void GetInput(int& outNumber)
{
	std::cin >> outNumber;
}

void GetOutput(int number, int& outOutput)
{
	std::vector<int> counter(10, 0);

	std::string strNumber = std::to_string(number);
	while (strNumber.empty() == false)
	{
		char currentDigitChar = strNumber[strNumber.size() - 1];
		strNumber.pop_back();

		int currentDigit = currentDigitChar - '0';

		if (currentDigit == 6 || currentDigit == 9)
		{
			if (counter[6] < counter[9])
				counter[6]++;
			else if (counter[6] > counter[9])
				counter[9]++;
			else
				counter[currentDigit]++;
		}
		else
		{
			counter[currentDigit]++;
		}
	}

	outOutput = *std::max_element(counter.begin(), counter.end());
}

int main()
{
	int number;
	GetInput(OUT number);

	int output;
	GetOutput(number, OUT output);

	std::cout << output;

	return 0;
}

#endif