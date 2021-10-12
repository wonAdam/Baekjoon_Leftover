//// https://leetcode.com/problems/greatest-common-divisor-of-strings/
//
//#include <string>
//#include <stack>
//#include <iostream>
//
//using namespace std;
//
//class Solution {
//private:
//    bool isConsistOf(const string& consist, const string& target)
//    {
//        size_t off = 0;
//        while (off < target.size())
//        {
//            if (target.substr(off, consist.size()) != consist)
//                return false;
//
//            off += consist.size();
//        }
//
//        // 딱 맞춰서 끝내지 못했으면 뒤에 뭐가 남은 것임.
//        if (off != target.size())
//            return false;
//
//        return true;
//    }
//
//public:
//    string gcdOfStrings(string str1, string str2) {
//        // 둘 중에 짧은 문자열을 잘라서 패턴을 확인합니다.
//        string minLengthStr = str1.size() > str2.size() ? str2 : str1;
//
//        // i는 패턴의 길이
//        for (int i = minLengthStr.size(); i > 0; --i)
//        {
//            // 두 문자열은 패턴의 길이로 나누어 떨어져야 되므로 더 진행하지 않고 미리 예외처리 (시간초과 예방)
//            if (str1.size() % i != 0 || str2.size() % i != 0)
//                continue;
//
//            // j는 minLengthStr의 offset
//            for (int j = 0; j < minLengthStr.size() - i + 1; ++j)
//            {
//                string currSubstr = minLengthStr.substr(j, i);
//
//                // 두 문자열에 대해 currSubstr의 패턴인지 확인
//                if (isConsistOf(currSubstr, str1) && isConsistOf(currSubstr, str2))
//                {
//                    return currSubstr;
//                }
//            }
//        }
//
//        return "";
//    }
//};
//
//int main()
//{
//    string str1 = "ABABABAB", str2 = "ABAB";
//    string result = Solution().gcdOfStrings(str1, str2);
//    return 0;
//}