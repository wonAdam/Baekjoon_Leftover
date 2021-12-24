//// https://leetcode.com/problems/count-negative-numbers-in-a-sorted-matrix/
//
//#include <vector>
//using namespace std;
//
//class Solution {
//public:
//    int countNegatives(vector<vector<int>>& grid) {
//        int rowSize = grid[0].size();
//
//        int cnt = 0;
//        for (const vector<int>& row : grid)
//        {
//            for (int i = 0 ; i < row.size(); ++i)
//            {
//                if (row[i] < 0)
//                {
//                    cnt += rowSize - i;
//                    break;
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
//    vector<vector<int>> grid = {
//        { 4,3,2,-1 },
//        { 3,2,1,-1 },
//        { 1,1,-1,-2 },
//        { -1,-1,-2,-3 },
//    };
//    int result = Solution().countNegatives(grid);
//    return 0;
//}