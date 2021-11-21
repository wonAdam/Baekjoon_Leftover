//// https://leetcode.com/problems/power-of-four/
//
//using namespace std;
//
//class Solution {
//public:
//    bool isPowerOfFour(int n) {
//        if (n == 1)
//            return true;
//
//        if (n == 0)
//            return false;
//
//        while (n % 4 == 0)
//        {
//            n /= 4;
//            if (n == 1)
//                return true;
//        }
//
//        return false;
//    }
//};
//
//int main()
//{
//    bool result = Solution().isPowerOfFour(16);
//    return 0;
//}