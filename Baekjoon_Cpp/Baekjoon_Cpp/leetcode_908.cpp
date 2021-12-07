//// https://leetcode.com/problems/smallest-range-i/
//
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//class Solution {
//public:
//    int smallestRangeI(vector<int>& nums, int k) {
//        pair<vector<int>::iterator, vector<int>::iterator> minmax = minmax_element(nums.begin(), nums.end());
//
//        int maxElement = *minmax.second;
//        int minElement = *minmax.first;
//
//        return max(0, maxElement - minElement - k * 2);
//    }
//};
//
//int main()
//{
//    vector<int> nums{1};
//    int result = Solution().smallestRangeI(nums, 0);
//    return 0;
//}