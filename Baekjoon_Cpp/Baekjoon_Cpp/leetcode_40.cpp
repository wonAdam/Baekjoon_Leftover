//// https://leetcode.com/problems/combination-sum-ii/
//
//#include <vector>
//#include <map>
//#include <algorithm>
//using namespace std;
//
//class Solution {
//private:
//    vector<vector<int>> result;
//
//private:
//    void go(map<int, int>& selected, map<int, int>::const_iterator candidateMapIter, const map<int, int>& candidateMap, const int& target)
//    {
//        int sum = 0;
//        for (const auto& p : selected)
//            sum += p.first * p.second;
//
//        if (sum == target)
//        {
//            result.push_back(vector<int>());
//            for (const auto& p : selected)
//                for (int i = 0; i < p.second; ++i)
//                    result[result.size() - 1].emplace_back(p.first);
//
//            return;
//        }
//        else if (sum > target)
//            return;
//
//        if (candidateMapIter == candidateMap.end())
//            return;
//
//        for (int i = 0; i <= candidateMapIter->second; ++i)
//        {
//            selected.emplace(candidateMapIter->first, i);
//            go(selected, ++candidateMapIter, candidateMap, target);
//            --candidateMapIter;
//            selected.erase(selected.find(candidateMapIter->first));
//        }
//    }
//
//public:
//    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
//        map<int, int> candidateMap;
//        for (const int& candidate : candidates)
//        {
//            if (candidateMap.find(candidate) != candidateMap.end())
//                ++candidateMap[candidate];
//
//            else
//                candidateMap.emplace(candidate, 1);
//        }
//
//        map<int, int> selected{ };
//        go(selected, candidateMap.cbegin(), candidateMap, target);
//
//        return result;
//    }
//};
//
//int main()
//{
//    vector<int> candidates{ 10,1,2,7,6,1,5 };
//    vector<vector<int>> result = Solution().combinationSum2(candidates, 8);
//    return 0;
//}