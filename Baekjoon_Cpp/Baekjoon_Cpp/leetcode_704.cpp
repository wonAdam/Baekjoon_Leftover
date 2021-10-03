//// https://leetcode.com/problems/binary-search/
//#include <vector>
//using namespace std;
//
//class Solution {
//public:
//    int search(vector<int>& nums, int target) {
//
//        int begin = 0;
//        int end = nums.size() - 1;
//
//        while (end - begin > 1)
//        {
//            int index = (end + begin) / 2;
//
//            if (nums[index] < target)
//            {
//                begin = index;
//            }
//            else if (nums[index] > target)
//            {
//                end = index;
//            }
//            else
//            {
//                return index;
//            }
//
//            if (nums[end] == target)
//                return end;
//
//            if (nums[begin] == target)
//                return begin;
//        }
//
//        if (nums[end] == target)
//            return end;
//
//        if (nums[begin] == target)
//            return begin;
//
//        return -1;
//    }
//};
//
//
//int main()
//{
//    vector<int> nums{ -1,0,3,5,9,12 };
//    int result = Solution().search(nums, 9);
//    return 0;
//}