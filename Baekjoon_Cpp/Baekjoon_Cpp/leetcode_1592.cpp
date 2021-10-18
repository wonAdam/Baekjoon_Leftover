//// https://leetcode.com/problems/rearrange-spaces-between-words/
//
//#include <string>
//#include <sstream>
//#include <vector>
//
//using namespace std;
//
//class Solution {
//public:
//    string reorderSpaces(string text) {
//
//        // count the number of spaces
//        int spaceCount = 0;
//        for (const char& c : text)
//        {
//            if (c == ' ')
//                ++spaceCount;
//        }
//
//        // split the words
//        stringstream ss(text);
//        vector<string> words;
//        string currWord;
//        while (ss >> currWord)
//        {
//            words.emplace_back(currWord);
//        }
//
//        // distribute the spaces
//        int singleAdjacentSpaces;
//        if (words.size() > 1)
//            singleAdjacentSpaces = spaceCount / (words.size() - 1);
//        else
//            singleAdjacentSpaces = spaceCount;
//        stringstream result;
//        for (int i = 0; i < words.size(); ++i)
//        {
//            result << words[i];
//
//            if (i < words.size() - 1)
//            {
//                spaceCount -= singleAdjacentSpaces;
//
//                for (int j = 0; j < singleAdjacentSpaces; ++j)
//                    result << ' ';
//            }
//        }
//
//        for (int i = 0; i < spaceCount; ++i)
//            result << ' ';
//
//
//        return result.str();
//    }
//};
//
//int main()
//{
//    string result = Solution().reorderSpaces("  this   is  a sentence ");
//
//    return 0;
//}