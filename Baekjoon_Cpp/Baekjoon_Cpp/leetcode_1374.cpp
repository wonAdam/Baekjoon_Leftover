//// https://leetcode.com/problems/generate-a-string-with-characters-that-have-odd-counts/
//
//#include <string>
//
//using namespace std;
//
//class Solution {
//public:
//    string generateTheString(int n) {
//        if (n % 2 == 0) // 짝수
//        {
//            return string(n - 1, 'a') + 'b';
//        }
//        else // 홀수
//        {
//            return string(n, 'a');
//        }
//    }
//};
//
//int main()
//{
//    string result = Solution().generateTheString(4);
//    return 0;
//}