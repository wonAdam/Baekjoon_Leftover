//// https://leetcode.com/problems/distribute-candies-to-people/
//#include <vector>
//
//using namespace std;
//
//class Solution {
//public:
//    vector<int> distributeCandies(int candies, int num_people) 
//    {
//        // rounds: distribution
//        // 0:      1 ~ n (n+1)n / 2
//        // 1:      n+2 ~ 3n (4n+2)n / 2
//        // 2:      3n+3 ~ 6n (9n+3)n / 2
//        // 3:      9n+4 ~ 10n (19n+4)n / 2
//
//        vector<int> distribution(num_people, 0);
//        int currIndex = 0;
//        int currGive = 1;
//        while (candies > 0)
//        {
//            distribution[currIndex] += min(candies, currGive);
//            candies = max(0, candies - currGive);
//            ++currGive;
//            currIndex = (currIndex + 1) % num_people;
//        }
//
//        return distribution;
//    }
//};
//
//
//int main()
//{
//    return 0;
//}