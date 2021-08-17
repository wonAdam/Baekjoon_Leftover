//#include <vector>
//
//using namespace std;
//
//long long solution(int numOfStairs) {
//    vector<long long> stairs(numOfStairs + 1, 0);
//    stairs[0] = 1;
//
//    for (int i = 1; i < stairs.size(); ++i)
//    {
//        long long numOfCases = 0;
//
//        if (i - 3 >= 0)
//            numOfCases += stairs[i - 3];
//
//        if (i - 2 >= 0)
//            numOfCases += stairs[i - 2];
//
//        if (i - 1 >= 0)
//            numOfCases += stairs[i - 1];
//
//        stairs[i] = numOfCases;
//    }
//
//    return stairs[numOfStairs];
//}
//
//int main()
//{
//
//    int result = solution(2);
//    return 0;
//}