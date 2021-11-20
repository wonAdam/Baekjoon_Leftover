//// https://leetcode.com/problems/check-if-n-and-its-double-exist/
//
//#include <vector>
//#include <set>
//
//using namespace std;
//
//class Solution {
//public:
//    bool checkIfExist(vector<int>& arr) {
//
//        set<int> s;
//        for (const int& e : arr)
//        {
//            if (s.find(e * 2) != s.end())
//            {
//                return true;
//            }
//            else if (e % 2 == 0 && s.find(e / 2) != s.end())
//            {
//                return true;
//            }
//
//            s.insert(e);
//        }
//
//        return false;
//    }
//};
//
//
//int main()
//{
//    vector<int> arr{ -2,0,10,-19,4,6,-8 };
//    bool result = Solution().checkIfExist(arr);
//    return 0;
//}