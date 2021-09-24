//// https://leetcode.com/problems/rectangle-area-ii/
//#include <vector>
//#include <set>
//using namespace std;
//
//class Solution {
//public:
//
//    int rectangleArea(vector<vector<int>>& rectangles) {
//        
//        set<int> xSet;
//        for (const vector<int>& rect : rectangles)
//        {
//            xSet.insert(rect[0]);
//            xSet.insert(rect[2]);
//        }
//
//        vector<int> xVals(xSet.begin(), xSet.end());
//        long long count = 0;
//        for (int i = 0; i < xVals.size() - 1; i += 2)
//        {
//            int x1 = xVals[i];
//            int x2 = xVals[i + 1];
//
//            set<pair<int, int>> heightSet;
//            for (int j = 0; j < rectangles.size(); ++j)
//            {
//                if (rectangles[j][0] <= x1 || rectangles[j][2] >= x2)
//                {
//                    for (int k = rectangles[j][1]; k < rectangles[j][3]; ++k)
//                        heightSet.insert(k);
//                }
//            }
//
//            count += heightSet.size() * (x2 - x1);
//            count %= static_cast<long long>(pow(10, 9))+ 2;
//        }
//
//        return count;
//    }
//};
//
//
//
//int main()
//{
//    vector<vector<int>> param;
//    param.push_back({ 0,0,1000000000,1000000000 });
//    //param.push_back({ 0,0,2,2 });
//    //param.push_back({ 1,0,2,3 });
//    //param.push_back({ 1,0,3,1 });
//    int result = Solution().rectangleArea(param);
//}