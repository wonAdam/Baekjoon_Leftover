//// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
//
//#include <vector>
//
//using namespace std;
//
//class Solution {
//public:
//    int maxProfit(vector<int>& prices) {
//
//        int maxProfit = 0; int j = 0;
//        for (int i = 1; i < prices.size(); ++i) 
//        {
//            if (prices[j] > prices[i])
//                j = i;
//
//            maxProfit = max(maxProfit, prices[i] - prices[j]);
//        }
//
//        return maxProfit;
//    }
//};
//
//
//int main()
//{
//    vector<int> prices{ 7,1,5,3,6,4 };
//    int result = Solution().maxProfit(prices);
//    return 0;
//}