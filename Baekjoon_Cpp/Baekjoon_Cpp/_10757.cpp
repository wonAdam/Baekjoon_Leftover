#include <iostream>
#include <vector>
#include <string>

int main()
{
	std::vector<int> answer;

	std::string a, b;
	std::cin >> a >> b;

	int x = a.size() - 1;
	int y = b.size() - 1;

	answer.reserve(x > y ? x + 1 : y + 1);

	int carry = 0;
	while (x >= 0 && y >= 0)
	{
		int an = x >= 0 ? (a[x] - '0') : 0;
		int bn = y >= 0 ? (b[y] - '0') : 0;
		int c = an + bn + carry;
		if (c >= 10)
		{
			c %= 10;
			carry = 1;
		}
		else
		{
			carry = 0;
		}

		answer.push_back(c);

		--x; --y;
	}

	if(carry == 1)
		answer.push_back(1);

	for (auto it = answer.end() - 1;; it--)
	{
		std::cout << *it;

		if (it == answer.begin())
			break;
	}

	return 0;
}