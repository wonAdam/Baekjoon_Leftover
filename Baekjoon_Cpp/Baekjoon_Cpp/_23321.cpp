// https://www.acmicpc.net/problem/23321

#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

static string JUMPSTR = "owln.";
static string READYSTR = ".omln";
static string SEATEDSTR = "..oLn";

int main()
{
	vector<string> input;
	for (int i = 0; i < 5; ++i)
	{
		string line;
		cin >> line;
		input.emplace_back(line);
	}

	for (int i = 0; i < input[0].size(); ++i)
	{
		if (input[4][i] == '.') // JUMP -> READY
		{
			for (int j = 0; j < 5; ++j)
			{
				input[j][i] = READYSTR[j];
			}
		}
		else if (input[1][i] == '.') // SEATED -> SEATED
		{
			// do nothing
		}
		else // READY -> JUMP
		{
			for (int j = 0; j < 5; ++j)
			{
				input[j][i] = JUMPSTR[j];
			}
		}
	}

	for (const string& line : input)
	{
		cout << line << "\n";
	}

	return 0;
}