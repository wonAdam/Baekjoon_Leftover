//// https://leetcode.com/problems/reverse-string-ii/
//
//#include <string>
//#include <algorithm>
//using namespace std;
//
//class Solution {
//public:
//    string reverseStr(string s, int k) {
//        for (int i = 0; i * k < s.length(); ++i)
//        {
//            if (i % 2 != 0)
//                continue;
//
//            if((i + 1) * k < s.length())
//                reverse(s.begin() + (i * k), s.begin() + ((i + 1) * k));
//            else
//                reverse(s.begin() + (i * k), s.end());
//        }
//
//        return s;
//    }
//};
//
//int main()
//{
//    string result = Solution().reverseStr("bafsad", 4);
//    return 0;
//}