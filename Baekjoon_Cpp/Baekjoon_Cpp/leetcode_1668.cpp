//// https://leetcode.com/problems/maximum-repeating-substring/
//#include <string>
//
//using namespace std;
//
//class Solution {
//public:
//    int maxRepeating(string sequence, string word) {
//        int startPos = sequence.find(word, 0);
//        if (startPos == sequence.npos)
//            return 0;
//
//        int maxCnt = 0;
//        while (startPos != sequence.npos)
//        {
//            int nextRepeatPos = startPos + word.size();
//            int cnt = 1;
//            while (nextRepeatPos == sequence.find(word, nextRepeatPos))
//            {
//                cnt++;
//                nextRepeatPos += word.size();
//            }
//
//            startPos++;
//            startPos = sequence.find(word, startPos);
//
//            maxCnt = max(maxCnt, cnt);
//        }
//
//        return maxCnt;
//    }
//};
//
//int main()
//{
//    int result = Solution().maxRepeating("aaabaaaabaaabaaaabaaaabaaaabaaaaba",
//        "aaaba");
//
//    return 0;
//}