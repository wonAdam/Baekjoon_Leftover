//// https://leetcode.com/problems/sum-of-all-odd-length-subarrays/
//
//#include <vector>
//
//using namespace std;
//
//class Solution {
//public:
//    int sumOddLengthSubarrays(vector<int>& arr) {
//        int accum = 0;
//        vector<int> mult(arr.size(), 0);
//        for (int i = 0; i < arr.size(); i++)
//        {
//            // 각 i부터 j까지의 합 중 길이가 홀수인 sum만 accum
//            int sum = 0;
//            for (int j = i; j < arr.size(); j++) 
//            {
//                sum += arr[j];
//                if ((j - i + 1) % 2 != 0)
//                    accum += sum;
//            }
//        }
//
//        return accum;
//    }
//};
//
//int main()
//{
//    vector<int> arr{ 1,4,2,5,3 };
//    int result = Solution().sumOddLengthSubarrays(arr);
//    return 0;
//}