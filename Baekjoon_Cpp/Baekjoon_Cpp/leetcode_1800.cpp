//// https://leetcode.com/problems/maximum-ascending-subarray-sum/
//#include <vector>
//
//using namespace std;
//
//class Solution {
//public:
//    int maxAscendingSum(vector<int>& nums) {
//        int currMaxSum = 0;
//        int currSum = 0;
//
//        for (int i = 0; i < nums.size(); ++i)
//        {
//            if (i == 0)
//            {
//                currSum = nums[i];
//                continue;
//            }
//
//            if (nums[i - 1] < nums[i])
//            {
//                currSum += nums[i];
//            }
//            else
//            {
//                if (currSum > currMaxSum)
//                    currMaxSum = currSum;
//
//                currSum = nums[i];
//            }
//        }
//
//        if (currSum > currMaxSum)
//            currMaxSum = currSum;
//
//        return currMaxSum;
//    }
//};
//
//int main()
//{
//    vector<int> nums{ 10,20,30,5,10,50 };
//    int result = Solution().maxAscendingSum(nums);
//
//    return 0;
//}