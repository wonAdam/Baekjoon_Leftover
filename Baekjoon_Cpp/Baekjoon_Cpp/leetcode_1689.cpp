////https://leetcode.com/problems/partitioning-into-minimum-number-of-deci-binary-numbers/
//
//#include <string>
//
//using namespace std;
//
//class Solution {
//public:
//    int minPartitions(string n) {
//        int maxPlace = 0;
//        for (const char& c : n)
//        {
//            maxPlace = std::max(c - 48, maxPlace);
//        }
//
//        return maxPlace;
//    }
//};
//
//int main()
//{
//    Solution().minPartitions("32");
//
//    return 0;
//}