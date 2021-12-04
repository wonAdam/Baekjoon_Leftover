//// https://leetcode.com/problems/arranging-coins/
//
//class Solution {
//public:
//    int arrangeCoins(int n) {
//        int cnt = 0;
//        long long accum = 0;
//        while (accum <= n)
//        {
//            accum += ++cnt;
//        }
//
//        return cnt - 1;
//    }
//};
//
//int main()
//{
//    int result = Solution().arrangeCoins(6);
//    return 0;
//}