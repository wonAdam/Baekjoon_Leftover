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
//    // 초기 시작상태
//    q.push("");
//
//    int cnt = 0;
//    // BFS
//    while (!q.empty())
//    {
//        std::string curr = q.front();
//        q.pop();
//
//        // 아직 리프까지 도달하기 전
//        if (curr.length() < numbers.size())
//        {
//            q.push(curr + '+');
//            q.push(curr + '-');
//        }
//        // 리프에 도달
//        else 
//        {
//            // 식 계산
//            int n = 0;
//            int idx = 0;
//            for (auto& op : curr)
//            {
//                if (op == '+')
//                    n += numbers[idx++];
//                else
//                    n -= numbers[idx++];
//            }
//            // 값 체크
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