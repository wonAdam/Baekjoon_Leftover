//// https://leetcode.com/problems/maximum-product-of-two-elements-in-an-array/
//
//#include <vector>
//#include <queue>
//#include <cmath>
//
//using namespace std;
//
//class Solution {
//public:
//    int maxProduct(vector<int>& nums) 
//    {
//        priority_queue<int, std::vector<int>, less<int>> pq_positive;
//
//        for (const int& num : nums)
//            pq_positive.push(num);
//
//
//        int p1 = pq_positive.top() - 1;
//        pq_positive.pop();
//        int p2 = pq_positive.top() - 1;
//
//        return p1 * p2;
//    }
//};
//
//int main()
//{
//    vector<int> nums{ 1,5,4,5 };
//    int result = Solution().maxProduct(nums);
//    return 0;
//}