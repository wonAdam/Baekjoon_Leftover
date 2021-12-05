//// https://leetcode.com/problems/time-needed-to-buy-tickets/
//
//#include <vector>
//
//using namespace std;
//
//class Solution {
//public:
//    int timeRequiredToBuy(vector<int>& tickets, int k) {
//        int time = 0;
//        while (true)
//        {
//            for (int i = 0; i < tickets.size(); ++i)
//            {
//                if (tickets[i] > 0)
//                {
//                    tickets[i] = tickets[i] - 1;
//                    ++time;
//
//                    if (i == k && tickets[k] == 0)
//                        return time;
//                }
//            }
//        }
//    }
//};
//
//
//int main()
//{
//    int k = 0;
//    vector<int> tickets{ 5,1,1,1 };
//    int result = Solution().timeRequiredToBuy(tickets, k);
//    return 0;
//}