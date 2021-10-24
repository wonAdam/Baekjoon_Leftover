//// https://leetcode.com/problems/remove-one-element-to-make-the-array-strictly-increasing/
//
//#include <vector>
//#include <list>
//
//using namespace std;
//
//class Solution {
//public:
//    bool canBeIncreasing(vector<int>& nums) {
//        list<int> li(nums.begin(), nums.end());
//
//        bool result = false;
//        for (auto it = li.cbegin(); it != li.end();)
//        {
//            int n = *it;
//            it = li.erase(it);
//            
//            bool isStrictlyIncreasing = true;
//            int prev = -1;
//            for (auto it2 = li.cbegin(); it2 != li.cend(); it2++)
//            {
//                if (prev > 0)
//                {
//                    if (prev >= *it2)
//                    {
//                        isStrictlyIncreasing = false;
//                        break;
//                    }
//
//                    prev = *it2;
//                }
//                else
//                {
//                    prev = *it2;
//                }
//            }
//
//            result |= isStrictlyIncreasing;
//            li.insert(it, n);
//        }
//
//        return result;
//    }
//};
//
//int main()
//{
//    vector<int> nums{ 1,2,10,5,7 };
//    bool result = Solution().canBeIncreasing(nums);
//    return 0;
//}