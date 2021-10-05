//// https://leetcode.com/problems/check-if-all-the-integers-in-a-range-are-covered/
//#include <vector>
//#include <set>
//#include <algorithm>
//
//using namespace std;
//
//class Solution {
//public:
//    bool isCovered(vector<vector<int>>& ranges, int left, int right) {
//        for (int i = left; i <= right; ++i)
//        {
//            bool isCovered = false;
//            for (const vector<int>& range : ranges)
//            {
//                if (i >= range[0] && i <= range[1])
//                {
//                    isCovered = true;
//                    break;
//                }
//            }
//
//            if (!isCovered)
//                return false;
//        }
//
//        return true;
//    }
//};
//
//int main()
//{
//    vector<vector<int>> ranges;
//    ranges.push_back({ 1,2 });
//    ranges.push_back({ 3,4 });
//    ranges.push_back({ 5,6 });
//
//    bool result = Solution().isCovered(ranges, 2, 5);
//	return 0;
//}