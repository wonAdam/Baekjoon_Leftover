//#include <string>
//#include <vector>
//#include <queue>
//
//using namespace std;
//
//int solution(vector<int> numbers, int target) {
//
//    std::queue<std::string> q;
//
//    q.push("");
//
//    int cnt = 0;
//    while (!q.empty())
//    {
//        std::string curr = q.front();
//        q.pop();
//
//        if (curr.length() < numbers.size())
//        {
//            q.push(curr + '+');
//            q.push(curr + '-');
//        }
//        else 
//        {
//            int n = 0;
//
//            int idx = 0;
//            for (auto& op : curr)
//            {
//                if (op == '+')
//                    n += numbers[idx++];
//                else
//                    n -= numbers[idx++];
//            }
//
//            if (n == target)
//            {
//                cnt++;
//            }
//        }
//    }
//
//    return cnt;
//}
//
//#include <iostream>
//int main()
//{
//    std::cout << solution({ 1, 1, 1, 1, 1 }, 3) << std::endl;
//}