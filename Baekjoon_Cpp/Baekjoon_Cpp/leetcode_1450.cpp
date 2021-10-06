//// 
//#include <vector>
//
//using namespace std;
//
//
//class Solution {
//public:
//    int busyStudent(vector<int>& startTime, vector<int>& endTime, int queryTime) {
//        int cnt = 0;
//        for (int i = 0; i < startTime.size(); ++i)
//        {
//            if (queryTime >= startTime[i] && queryTime <= endTime[i])
//                cnt++;
//        }
//        return cnt;
//    }
//};
//
//
//int main()
//{
//    vector<int> startTime{ 1,2,3 };
//    vector<int> endTime{ 3,2,7 };
//    int result = Solution().busyStudent(startTime, endTime, 4);
//
//    return 0;
//}