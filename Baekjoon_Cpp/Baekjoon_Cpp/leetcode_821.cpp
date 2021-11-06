//// https://leetcode.com/problems/shortest-distance-to-a-character/
//
//#include <vector>
//#include <string>
//
//using namespace std;
//
//class Solution {
//public:
//    vector<int> shortestToChar(string s, char c) {
//        
//        vector<int> answer(s.size(), 0);
//
//        for (int i = 0; i < s.size(); ++i)
//        {
//            if (s[i] == c)
//            {
//                // go left
//                int cnt = 1;
//                for (int j = i - 1; j >= 0; --j)
//                {
//                    if (s[j] == c)
//                        break;
//
//                    if (answer[j] == 0 || answer[j] > cnt)
//                    {
//                        answer[j] = cnt;
//                        cnt++;
//                    }
//                    else
//                    {
//                        break;
//                    }
//                }
//                // go right
//                cnt = 1;
//                for (int j = i + 1; j < s.size(); ++j)
//                {
//                    if (s[j] == c)
//                        break;
//
//                    if (answer[j] == 0 || answer[j] > cnt)
//                    {
//                        answer[j] = cnt;
//                        cnt++;
//                    }
//                    else
//                    {
//                        break;
//                    }
//                }
//
//            }
//        }
//
//        return answer;
//
//    }
//};
//
//int main()
//{
//    vector<int> result = Solution().shortestToChar("loveleetcode", 'e');
//	return 0;
//}