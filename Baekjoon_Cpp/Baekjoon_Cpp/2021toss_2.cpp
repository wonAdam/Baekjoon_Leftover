//#include <vector>
//#include <map>
//
//using namespace std;
//
//vector<vector<int>> solution(int servers, bool sticky, vector<int> requests) {
//    vector<vector<int>> answer;
//
//    map<int, int> requestMap; // request -> server
//    for (int i = 1; i <= servers; ++i)
//    {
//        answer.push_back({});
//    }
//
//    int serverIdx = 0;
//    for (const auto& request : requests)
//    {
//        if (sticky)
//        {
//            // 처음 들어온 Request
//            if (requestMap.find(request) == requestMap.end())
//            {
//                requestMap[request] = serverIdx;
//                answer[serverIdx].push_back(request);
//                serverIdx = (serverIdx + 1) % servers;
//            }
//            else
//            {
//                int prevServer = requestMap[request];
//                answer[prevServer].push_back(request);
//            }
//        }
//        else
//        {
//            answer[serverIdx].push_back(request);
//            serverIdx = (serverIdx + 1) % servers;
//        }
//        
//    }
//
//    return answer;
//}

//int main()
//{
//    auto result = solution(2, false, { 1, 2 });
//    return 0;
//}