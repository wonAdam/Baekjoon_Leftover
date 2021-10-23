//// https://leetcode.com/problems/projection-area-of-3d-shapes/
//
//#include <vector>
//
//using namespace std;
//
//class Solution {
//public:
//    int projectionArea(vector<vector<int>>& grid) {
//
//        // xz
//        // sum of max elements in the each vector
//        int maxSize = 0;
//        int xz = 0;
//        for (const vector<int>& row : grid)
//        {
//            int index = 0;
//            int max = 0;
//            for (const int& elem : row)
//            {
//                if (max < elem)
//                    max = elem;
//
//                index++;
//            }
//
//            xz += max;
//            if (maxSize < index)
//                maxSize = index;
//        }
//
//
//        // yz
//        // sum of max elements in the each index
//        int yz = 0;
//        for (int i = 0; i < maxSize; i++)
//        {
//            int max = 0;
//            for (const vector<int>& row : grid)
//            {
//                if (row.size() >= maxSize)
//                {
//                    if (max < row[i])
//                        max = row[i];
//                }
//            }
//
//            yz += max;
//        }
//
//        // xy
//        // num of elements that are not zero
//        int xy = 0;
//        for (const vector<int>& row : grid)
//        {
//            for (const int& elem : row)
//            {
//                if (elem > 0)
//                    xy++;
//            }
//        }
//
//        return xz + yz + xy;
//    }
//};
//
//int main()
//{
//    vector<vector<int>> grid;
//    grid.push_back({ 1,0 });
//    grid.push_back({ 0,2 });
//    //grid.push_back({ 1,1,1 });
//    int result = Solution().projectionArea(grid);
//    return 0;
//}