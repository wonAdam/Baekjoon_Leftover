//// https://leetcode.com/problems/reverse-words-in-a-string-iii/
//#include <string>
//
//using namespace std;
//
//class Solution {
//public:
//    void reverseWord(int startIndex, int endIndex, string& s)
//    {
//        for (; startIndex < endIndex; ++startIndex, --endIndex)
//        {
//            char temp = s[startIndex];
//            s[startIndex] = s[endIndex];
//            s[endIndex] = temp;
//        }
//    }
//
//    string reverseWords(string& s) {
//        int startIndex = 0;
//        int endIndex = startIndex;
//
//        for (int i = 0; i < s.size(); ++i)
//        {
//            if (s[i] == ' ')
//            {
//                endIndex = i - 1;
//                reverseWord(startIndex, endIndex, s);
//                startIndex = i + 1;
//            }
//        }
//
//        reverseWord(startIndex, s.size() - 1, s);
//
//        return s;
//    }
//};
//
//int main()
//{
//    string s = "God Ding";
//    s = Solution().reverseWords(s);
//
//
//}