//// https://leetcode.com/problems/make-two-arrays-equal-by-reversing-sub-arrays/
//
//#include <vector>
//#include <unordered_map>
//
//using namespace std;
//
//class Solution {
//public:
//    bool canBeEqual(vector<int>& target, vector<int>& arr) 
//    {
//        unordered_map<int,int> map;
//        for (int i = 0; i < target.size(); ++i)
//        {
//            map[target[i]]++;
//            map[arr[i]]--;
//        }
//
//        for (const auto& [k, v] : map)
//        {
//            if (v != 0) 
//                return false;
//        }
//
//        return true;
//    }
//};
//
//int main()
//{
//    vector<int> target{ 1,2,3,4 };
//    vector<int> arr{ 2,4,1,3 };
//
//    bool result = Solution().canBeEqual(target, arr);
//
//    return 0;
//}