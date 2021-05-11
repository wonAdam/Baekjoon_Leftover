//#include <vector>
//
//enum DIR : int { RIGHT = 0, DOWN = 1, LEFT = 2, UP = 3 };
//struct direction { int x, y; } d[] { {1,0}, {0,1}, {-1,0}, {0,-1} };
//
//std::vector<int> solution(int rows, int columns, std::vector<std::vector<int>> queries) {
//    std::vector<int> answer;
//
//    std::vector<std::vector<int>> matrix;
//    for (int i = 0; i < rows; i++)
//        matrix.push_back(std::vector<int>());
//
//    for (int i = 0; i < rows; i++)
//        for (int j = 0; j < columns; j++)
//            matrix[i].push_back(i * columns + j + 1);
//
//
//    for (auto& q : queries)
//    {
//        int x1 = q[0]-1;
//        int y1 = q[1]-1;
//        int x2 = q[2]-1;
//        int y2 = q[3]-1;
//
//        // 가로가 x, 즉 열
//        // 세로가 y, 즉 행
//        DIR dir = DIR::RIGHT;
//        int currX = x1;
//        int currY = y1;
//        int nextX = currX + d[dir].x;
//        int nextY = currY + d[dir].y;
//
//        int next_val = matrix[nextY][nextX];
//        matrix[nextY][nextX] = matrix[currY][currX];
//        do
//        {
//            currX = nextX;
//            currY = nextY;
//
//            if (dir == DIR::RIGHT && currX == x2)
//                dir = DIR::DOWN;
//            if (dir == DIR::DOWN && currY == y2)
//                dir = DIR::LEFT;
//            if (dir == DIR::LEFT && currX == x1)
//                dir = DIR::UP;
//            if (dir == DIR::UP && currY == y1)
//                dir = DIR::RIGHT;
//
//            nextX = currX + d[dir].x;
//            nextY = currY + d[dir].y;
//
//            int temp = matrix[nextY][nextX];
//            matrix[nextY][nextX] = next_val;
//            next_val = temp;
//
//        } while (currX != x1 || currY != y1);
//
//
//
//
//
//
//    }
//
//    return answer;
//}
//
//
//
//#include <iostream>
//
//int main()
//{
//    solution(6, 6, { {2,2,5,4} });
//	return 0;
//}