//// https://leetcode.com/problems/accounts-merge/
//#include <vector>
//#include <string>
//#include <map>
//#include <set>
//#include <algorithm>
//#include <queue>
//
//using namespace std;
//
//class Solution {
//public:
//    // Input: accounts = [[ "John","johnsmith@mail.com","john_newyork@mail.com"],
//    // ["John","john_newyork@mail.com","john00@mail.com"],["John","johnsmith@mail.com","john_newyork@mail.com"],
//    // ["Mary","mary@mail.com"],["John","johnnybravo@mail.com"]]
//
//    // 일종의 노드(이메일)이 다른 노드(이메일)과 연결되어 연결된 그래프는 하나의 계정으로 통합.
//    // 연결이 안된 그래프들은 서로 다른 사람의 계정임.
//
//    vector<vector<string>> accountsMerge(vector<vector<string>>& accounts) {
//        map<string, set<string>> emailsToOtherEmails;
//        map<string, string> emailsToNames;
//        for (const auto& v : accounts)
//        {
//            for (int i = 1; i < v.size(); ++i)
//            {
//                emailsToNames.emplace(v[i], v[0]);
//                emailsToOtherEmails.emplace(v[i], set<string>());
//                auto it = emailsToOtherEmails.find(v[i]);
//                for (int j = 1; j < v.size(); ++j)
//                {
//                    if (i == j) continue;
//
//                    it->second.insert(v[j]);
//                }
//            }
//        }
//
//        vector<vector<string>> result;
//        set<string> visited;
//        for (const auto& pair : emailsToOtherEmails)
//        {
//            string startEmail = pair.first;
//            if (visited.find(startEmail) == visited.end()) // 아직 방문 안 한 이메일
//            { // 그러면 여기서 새로운 계정을 찾자
//                queue<string> q;
//                result.push_back(vector<string>());
//                int resultCurrIndex = result.size() - 1;
//                result[resultCurrIndex].push_back(emailsToNames[startEmail]); // 우선 이름 push
//
//                q.push(startEmail);
//                visited.insert(startEmail);
//                while (!q.empty()) // BFS
//                {
//                    string currEmail = q.front();
//                    q.pop();
//                    result[resultCurrIndex].push_back(currEmail);
//                    const set<string>& neighbors = emailsToOtherEmails[currEmail];
//                    for (const string& otherEmail : neighbors)
//                    {
//                        if (visited.find(otherEmail) == visited.end())
//                        {
//                            q.push(otherEmail);
//                            visited.insert(otherEmail);
//                        }
//                    }
//
//                }
//
//                sort(result[resultCurrIndex].begin() + 1, result[resultCurrIndex].end());
//            }
//        }
//
//
//        return result;
//    }
//};
//
//int main()
//{
//    vector<vector<string>> accounts;
//    accounts.push_back({ "John","johnsmith@mail.com","john_newyork@mail.com" });
//    accounts.push_back({ "John","johnsmith@mail.com","john00@mail.com" });
//    accounts.push_back({ "Mary","mary@mail.com" });
//    accounts.push_back({ "John","johnnybravo@mail.com" });
//
//    vector<vector<string>> r = Solution().accountsMerge(accounts);
//
//
//
//    return 0;
//}