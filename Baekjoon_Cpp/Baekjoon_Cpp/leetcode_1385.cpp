//// https://leetcode.com/problems/find-the-distance-value-between-two-arrays/
//
//#include <vector>
//
//using namespace std;
//
//class Solution {
//public:
//    int findTheDistanceValue(const vector<int>& arr1, const vector<int>& arr2, const int d) {
//        int cnt = 0;
//        for (const int& e1 : arr1)
//        {
//            bool accept = true;
//            for (const int& e2 : arr2)
//            {
//                if (abs(e1 - e2) <= d)
//                {
//                    accept = false;
//                    break;
//                }
//            }
//
//            if (accept)
//            {
//                cnt++;
//            }
//        }
//
//        return cnt;
//    }
//};
//
//int main()
//{
//    vector<int> arr1{ 1,4,2,3 };
//    vector<int> arr2{ -4,-3,6,10,20,30 };
//    int result = Solution().findTheDistanceValue(arr1, arr2, 3);
//
//    return 0;
//}