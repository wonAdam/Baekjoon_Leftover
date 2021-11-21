//// https://leetcode.com/problems/is-subsequence/
//
//#include <string>
//
//using namespace std;
//
//class Solution {
//public:
//    bool isSubsequence(string s, string t) {
//        int currIndex = 0;
//
//        for (const char& c : t)
//        {
//            if (s[currIndex] == c)
//            {
//                if (++currIndex >= s.size())
//                    break;
//            }
//        }
//
//        return currIndex == s.size();
//    }
//};
//
//int main()
//{
//    bool result = Solution().isSubsequence("abc","ahbgdc");
//    return 0;
//}