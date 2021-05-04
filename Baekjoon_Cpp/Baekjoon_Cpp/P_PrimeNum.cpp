//#include <vector>
//#include <iostream>
//using namespace std;
//
//bool isPrime(int num)
//{
//    for (int i = 2; i < num; i++)
//        if (num % i == 0) return false;
//
//    return true;
//}
//
//int solution(vector<int> nums) {
//
//    int cnt = 0;
//    for (int i = 0; i < nums.size(); i++)
//    {
//        for (int j = i+1; j < nums.size(); j++)
//        {
//            if (i == j) continue;
//            for (int k = j+1; k < nums.size(); k++)
//            {
//                if (j == k || i == k) continue;
//                if (isPrime(nums[i] + nums[j] + nums[k]))
//                    cnt++;
//            }
//        }
//    }
//    return cnt;
//}
//
//int main()
//{
//    std::cout << solution({1, 2, 3, 4}) << std::endl;
//}