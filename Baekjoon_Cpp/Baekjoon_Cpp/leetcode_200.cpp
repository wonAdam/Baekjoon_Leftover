//// https://leetcode.com/problems/number-of-islands/
//
//#include <vector>
//#include <queue>
//
//using namespace std;
//
//class Solution {
//private:
//    int dirX[4] = { 1, 0, -1, 0 };
//    int dirY[4] = { 0, -1, 0, 1 };
//
//    bool IsValidLocation(int gridX, int gridY, int x, int y)
//    {
//        return x >= 0 && x < gridX && y >= 0 && y < gridY;
//    }
//
//    void BFSIsland(vector<vector<char>>& grid, int x, int y)
//    {
//        queue<pair<int, int>> q;
//        q.push(make_pair(x, y));
//
//        int gridX = grid[0].size();
//        int gridY = grid.size();
//
//        while (!q.empty())
//        {
//            pair<int, int> currLoc = q.front();
//            q.pop();
//
//            for (int i = 0; i < 4; ++i)
//            {
//                int nextLocX = currLoc.first + dirX[i];
//                int nextLocY = currLoc.second + dirY[i];
//
//                if (IsValidLocation(gridX, gridY, nextLocX, nextLocY) && grid[nextLocY][nextLocX] == '1')
//                {
//                    grid[nextLocY][nextLocX] = '0';
//                    q.push(make_pair(nextLocX, nextLocY));
//                }
//            }
//        }
//    }
//
//public:
//    int numIslands(vector<vector<char>>& grid) {
//        int cnt = 0;
//        for (int i = 0; i < grid.size(); ++i)
//        {
//            for (int j = 0; j < grid[i].size(); ++j)
//            {
//                if (grid[i][j] == '1')
//                {
//                    BFSIsland(grid, j, i);
//                    cnt++;
//                }
//            }
//        }
//
//        return cnt;
//    }
//};
//
//int main()
//{
//    vector<vector<char>> grid{
//        {'1', '1', '1', '1', '0'},
//        {'1', '1', '0', '1', '0'},
//        {'1', '1', '0', '0', '0'},
//        {'0', '0', '0', '0', '0'}
//    };
//    int result = Solution().numIslands(grid);
//    return 0;
//}