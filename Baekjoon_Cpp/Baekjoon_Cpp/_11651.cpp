#define baekjoon11651 0
#if baekjoon11651

#include <iostream>
#include <vector>
#include <algorithm>

#define OUT 
#define IN 

struct Coordinate
{
	Coordinate(int inX, int inY)
		: x(inX), y(inY)
	{
	}

	int x;
	int y;
};

void GetInput(std::vector<Coordinate>& outCoordinates)
{
	int inputNum;
	std::cin >> inputNum;

	outCoordinates.clear();
	for (int i = 0; i < inputNum; ++i)
	{
		int x; int y;
		std::cin >> x >> y;

		outCoordinates.emplace_back(x, y);
	}
}

void SortCoordinates(std::vector<Coordinate>& inOutCoordinates)
{
	std::sort(inOutCoordinates.begin(), inOutCoordinates.end(),
	[](const Coordinate& c1, const Coordinate& c2)
	{
		if(c1.y != c2.y)
			return c1.y < c2.y;
		else
			return c1.x < c2.x;
	});
}

void PrintCoordinates(const std::vector<Coordinate>& inCoordinates)
{
	for (const Coordinate& c : inCoordinates)
		std::cout << c.x << " " << c.y << "\n";
}

int main()
{
	std::vector<Coordinate> coordinates;

	GetInput(OUT coordinates);

	SortCoordinates(IN OUT coordinates);

	PrintCoordinates(IN coordinates);

	return 0;
}

#endif