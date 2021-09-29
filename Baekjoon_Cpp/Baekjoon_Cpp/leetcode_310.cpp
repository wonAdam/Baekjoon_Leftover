//// https://leetcode.com/problems/minimum-height-trees/
//
//#include <vector>
//#include <map>
//#include <set>
//#include <queue>
//
//using namespace std;
//
//class Solution {
//private:
//    void makeEdgeList(map<int, set<int>>& outEdgeList, vector<vector<int>>& edges)
//    {
//        for (const vector<int>& edge : edges)
//        {
//            if (outEdgeList.find(edge[0]) == outEdgeList.end())
//            {
//                outEdgeList.emplace(edge[0], set<int>());
//            }
//            outEdgeList[edge[0]].insert(edge[1]);
//
//            if (outEdgeList.find(edge[1]) == outEdgeList.end())
//            {
//                outEdgeList.emplace(edge[1], set<int>());
//            }
//            outEdgeList[edge[1]].insert(edge[0]);
//        }
//    }
//
//    bool isAllLeafNodes(map<int, set<int>>& edgeList)
//    {
//        for (const auto& pair : edgeList)
//        {
//            if (pair.second.size() > 1)
//                return false;
//        }
//
//        return true;
//    }
//
//public:
//    vector<int> findMinHeightTrees(int n, vector<vector<int>>& edges) {
//        if (edges.size() == 0)
//            return { 0 };
//
//        if (edges.size() == 1)
//            return edges[0];
//
//        set<int> notLeafs;
//        for (int i = 0; i < n; ++i)
//            notLeafs.insert(i);
//
//        map<int, set<int>> edgeList;
//        makeEdgeList(edgeList, edges);
//
//        while (notLeafs.size() > 2)
//        {
//            // Find Leaf Nodes
//            set<int> leafs;
//            for (const auto& pair : edgeList)
//            {
//                if (pair.second.size() == 1)
//                {
//                    leafs.insert(pair.first);
//                }
//            }
//
//            // Remove Leaf Nodes
//            for (const int& leaf : leafs)
//            {
//                for (const auto& pair : edgeList)
//                {
//                    set<int> neighborNodes = pair.second;
//                    neighborNodes.erase(leaf);
//                    edgeList[pair.first] = neighborNodes;
//                }
//
//                edgeList.erase(leaf);
//                notLeafs.erase(leaf);
//            }
//        }
//
//        vector<int> result;
//        for (const auto& pair : edgeList)
//            result.push_back(pair.first);
//        
//        return result;
//    }
//};
//
//
//int main()
//{
//    //7
//    //[[0, 1], [1, 2], [1, 3], [2, 4], [3, 5], [4, 6]]
//    vector<vector<int>> edges;
//    edges.push_back({ 0, 1 });
//    edges.push_back({ 1, 2 });
//    edges.push_back({ 1, 3 });
//    edges.push_back({ 2, 4 });
//    edges.push_back({ 3, 5 });
//    edges.push_back({ 4, 6 });
//    vector<int> result = Solution().findMinHeightTrees(7, edges);
//
//    return 0;
//}