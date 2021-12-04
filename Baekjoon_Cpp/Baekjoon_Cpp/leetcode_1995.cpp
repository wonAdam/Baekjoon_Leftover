//// https://leetcode.com/problems/count-special-quadruplets/
//
//#include <vector>
//#include <set>
//#include <algorithm>
//
//using namespace std;
//
//class Solution {
//private:
//    int go(int selectedCnt, vector<int>& selectedIndecies, const vector<int>& nums)
//    {
//        if (selectedCnt == 3)
//        {
//            int maxSelectedIndex = selectedIndecies[2];
//            int cnt = 0;
//            for (int i = maxSelectedIndex + 1; i < nums.size(); ++i)
//            {
//                if (nums[i] ==
//                    nums[selectedIndecies[0]] +
//                    nums[selectedIndecies[1]] +
//                    nums[selectedIndecies[2]]
//                    )
//                {
//                    cnt++;
//                }
//            }
//
//            return cnt;
//        }
//
//        int cnt = 0;
//        for (int i = selectedIndecies.size() == 0 ? 0 : selectedIndecies[selectedIndecies.size() - 1] + 1; i < nums.size(); ++i)
//        {
//            selectedIndecies.push_back(i);
//            cnt += go(selectedCnt + 1, selectedIndecies, nums);
//            selectedIndecies.pop_back();
//        }
//
//        return cnt;
//    }
//
//public:
//    int countQuadruplets(vector<int>& nums) 
//    {
//        vector<int> selectedIndecies { };
//        return go(0, selectedIndecies, nums);
//    }
//};
//
//int main()
//{
//    vector<int> nums{ 1,1,1,3,5 };
//    int result = Solution().countQuadruplets(nums);
//    return 0;
//}