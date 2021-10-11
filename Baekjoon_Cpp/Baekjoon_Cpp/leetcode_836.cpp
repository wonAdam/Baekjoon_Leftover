//// https://leetcode.com/problems/rectangle-overlap/
//
//#include <vector>
//
//using namespace std;
//
//class Solution {
//public:
//    bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
//
//        // case1: rec2 is on left-side of rec1
//        if (rec2[2] <= rec1[0])
//        {
//            return false;
//        }
//        // case2: rec2 is on right-side of rec1
//        else if (rec2[0] >= rec1[2])
//        {
//            return false;
//        }
//        // case3: rec2 is on upper-side of rec1
//        else if (rec2[1] >= rec1[3])
//        {
//            return false;
//        }
//        // case4: rec2 is on bottom-side of rec1
//        else if (rec2[3] <= rec1[1])
//        {
//            return false;
//        }
//        // overlaps
//        else
//        {
//            return true;
//        }
//    }
//};
//
//int main()
//{
//    vector<int> rec1{ 0,0,2,2 };
//    vector<int> rec2{ 1,1,3,3 };
//    bool result = Solution().isRectangleOverlap(rec1, rec2);
//    return 0;
//}