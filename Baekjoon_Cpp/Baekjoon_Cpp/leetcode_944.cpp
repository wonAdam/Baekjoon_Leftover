//// https://leetcode.com/problems/delete-columns-to-make-sorted/
//
//#include <string>
//#include <vector>
//
//using namespace std;
//
//class Solution {
//public:
//    int minDeletionSize(vector<string>& strs) {
//        int deleteCount = 0;
//        for (int i = 0; i < strs[0].size(); ++i)
//        {
//            for (int j = 0; j < strs.size() - 1; ++j)
//            {
//                if (strs[j][i] > strs[j + 1][i])
//                {
//                    ++deleteCount;
//                    break;
//                }
//            }
//        }
//
//        return deleteCount;
//    }
//};
//
//int main()
//{
//    vector<string> strs{ "cba","daf","ghi" };
//    int result = Solution().minDeletionSize(strs);
//
//    return 0;
//}