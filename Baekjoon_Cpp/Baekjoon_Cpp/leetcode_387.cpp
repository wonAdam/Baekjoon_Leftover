//// https://leetcode.com/problems/first-unique-character-in-a-string/
//
//#include <string>
//#include <map>
//using namespace std; 
//
//class Solution {
//public:
//    int firstUniqChar(string s) 
//    {
//        map<char, int> m;
//        for (int i = 0 ; i < s.size(); ++i)
//        {
//            const char& c = s[i];
//            if (m.find(c) != m.end()) // already exists in the map
//            {
//                m[c] = s.size();
//            }
//            else
//            {
//                m[c] = i;
//                m.emplace(c, i);
//            }
//        }
//
//        int minIndex = s.size();
//        for (const auto& pair : m)
//        {
//            const int& index = pair.second;
//
//            minIndex = min(index, minIndex);
//        }
//
//        return minIndex == s.size() ? -1 : minIndex;
//    }
//};
//
//int main()
//{
//    const string s = "loveleetcode";
//    int result = Solution().firstUniqChar(s);
//
//    return 0;
//}