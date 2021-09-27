#include <vector>
#include <map>
#include <set>
#include <queue>

using namespace std;

class Solution {
private:
    void makeEdgeList(map<int, set<int>>& outEdgeList, vector<vector<int>>& edges)
    {
        for (const vector<int>& edge : edges)
        {
            if (outEdgeList.find(edge[0]) == outEdgeList.end())
            {
                outEdgeList.emplace(edge[0], set<int>());
            }
            outEdgeList[edge[0]].insert(edge[1]);

            if (outEdgeList.find(edge[1]) == outEdgeList.end())
            {
                outEdgeList.emplace(edge[1], set<int>());
            }
            outEdgeList[edge[1]].insert(edge[0]);
        }
    }

    int getHeightByBFS(int rootVertex, map<int, set<int>>& edgeList, int currMinHeight){
        queue<pair<int, int>> q;
        set<int> visited;

        q.push(make_pair(rootVertex, 0));
        visited.insert(rootVertex);

        int totalHeight = 0;
        while (!q.empty())
        {
            int currVert = q.front().first;
            int currHeight = q.front().second;
            q.pop();

            for (const int& neighbor : edgeList[currVert])
            {
                if (visited.find(neighbor) == visited.end())
                {
                    visited.insert(neighbor);
                    q.push(make_pair(neighbor, currHeight + 1));
                    totalHeight = max(totalHeight, currHeight + 1);

                    if (currHeight + 1 > currMinHeight)
                        return currHeight + 1;
                }
            }

        }

        return totalHeight;
    }

public:
    vector<int> findMinHeightTrees(int n, vector<vector<int>>& edges) {
        map<int, set<int>> edgeList;
        makeEdgeList(edgeList, edges);

        int minHeight = n;
        vector<int> minHeightRoots;
        for (int i = 0; i < n; ++i)
        {
            int height = getHeightByBFS(i, edgeList, minHeight);
            if (height < minHeight)
            {
                minHeight = height;
                minHeightRoots.clear();
                minHeightRoots.push_back(i);
            }
            else if (height == minHeight)
            {
                minHeightRoots.push_back(i);
            }
        }

        return minHeightRoots;
    }
};


int main()
{
    vector<vector<int>> edges;
    edges.push_back({ 1,0 });
    edges.push_back({ 1,2 });
    edges.push_back({ 1,3 });
    vector<int> result = Solution().findMinHeightTrees(4, edges);

    return 0;
}