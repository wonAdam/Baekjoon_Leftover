//// https://leetcode.com/problems/lemonade-change/
//#include <vector>
//#include <map>
//
//using namespace std;
//
//#define LEMONADE_COST 5
//
//class Solution {
//public:
//    bool lemonadeChange(vector<int> bills) {
//        int fives = 0;
//        int tens = 0;
//
//        for (const auto& bill : bills)
//        {
//            switch (bill)
//            {
//            case 5:
//                fives += 1;
//                break;
//
//            case 10:
//                if (fives == 0)
//                    return false;
//
//                fives -= 1;
//                tens += 1;
//
//                break;
//
//            case 20:
//                if (fives > 0 && tens > 0)
//                {
//                    tens -= 1;
//                    fives -= 1;
//                }
//                else if (fives >= 3)
//                {
//                    fives -= 3;
//                }
//                else
//                {
//                    return false;
//                }
//
//                break;
//
//            }
//        }
//
//        return true;
//    }
//};
//
//int main()
//{
//    bool result = Solution().lemonadeChange({ 5,5,10,10,20 });
//
//    return 0;
//}