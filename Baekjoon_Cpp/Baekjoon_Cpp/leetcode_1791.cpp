// https://leetcode.com/problems/find-center-of-star-graph/
//#include <vector>
//
//using namespace std;
//
//class Solution {
//public:
//    int findCenter(vector<vector<int>>& edges) {
//        vector<bool> counted(edges.size(), false);
//
//        for (const vector<int>& edge : edges)
//        {
//            if (counted[edge[0]] == true)
//                return edge[0];
//            else
//                counted[edge[0]] = true;
//
//            if (counted[edge[1]] == true)
//                return edge[1];
//            else
//                counted[edge[1]] = true;
//        }
//
//        return -1;
//    }
//};
//
//int main()
//{
//
//    return 0;
//}