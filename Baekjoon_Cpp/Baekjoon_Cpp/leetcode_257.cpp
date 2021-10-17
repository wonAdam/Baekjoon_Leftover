//// https://leetcode.com/problems/binary-tree-paths/
//
//#include <vector>
//#include <string>
//#include <queue>
//#include <sstream>
//
//using namespace std;
//
//struct TreeNode {
//    int val;
//    TreeNode* left;
//    TreeNode* right;
//    TreeNode() : val(0), left(nullptr), right(nullptr) {}
//    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//    TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
//};
//
//class Solution {
//public:
//    vector<string> binaryTreePaths(TreeNode* root) {
//        queue<vector<TreeNode*>> q;
//        q.push(vector<TreeNode*>{ root });
//
//        queue<vector<TreeNode*>> leafPath;
//        while (!q.empty())
//        {
//            vector<TreeNode*> path = q.front();
//            q.pop();
//
//            bool noChild = true;
//            if (path[path.size() - 1]->right)
//            {
//                noChild = false;
//                path.push_back(path[path.size() - 1]->right);
//                q.emplace(path.begin(), path.end());
//                path.pop_back();
//            }
//            if (path[path.size() - 1]->left)
//            {
//                noChild = false;
//                path.push_back(path[path.size() - 1]->left);
//                q.emplace(path.begin(), path.end());
//                path.pop_back();
//            }
//
//            if(noChild)
//            {
//                leafPath.push(path);
//            }
//        }
//
//        vector<string> result;
//        while (!leafPath.empty())
//        {
//            stringstream ss;
//            vector<TreeNode*> path = leafPath.front();
//            leafPath.pop();
//
//            for (int i = 0; i < path.size(); ++i)
//            {
//                ss << path[i]->val;
//                if (i != path.size() - 1)
//                {
//                    ss << "->";
//                }
//            }
//
//            result.emplace_back(ss.str());
//        }
//
//        return result;
//    }
//};