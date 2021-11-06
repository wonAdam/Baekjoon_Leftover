//// https://leetcode.com/problems/maximum-depth-of-n-ary-tree/
//
//#include <vector>
//#include <queue>
//#include <map>
//
//using namespace std;
//
//// Definition for a Node.
//class Node {
//public:
//    int val;
//    vector<Node*> children;
//
//    Node() {}
//
//    Node(int _val) {
//        val = _val;
//    }
//
//    Node(int _val, vector<Node*> _children) {
//        val = _val;
//        children = _children;
//    }
//};
//
//
//class Solution {
//public:
//    int maxDepth(Node* root) {
//
//        if (root == nullptr)
//            return 0;
//
//        queue<Node*> q;
//        map<Node*, int> m;
//        q.push(root);
//        m.emplace(root, 1);
//
//        int maxDepth = 1;
//        while (!q.empty())
//        {
//            Node* currNode = q.front();
//            q.pop();
//
//            int currDepth = m.find(currNode)->second;
//
//            if (maxDepth < currDepth)
//                maxDepth = currDepth;
//
//            for (Node* child : currNode->children)
//            {
//                q.push(child);
//                m.emplace(child, currDepth + 1);
//            }
//        }
//
//
//        return maxDepth;
//    }
//};
//
//
//int main()
//{
//
//    return 0;
//}