//// https://leetcode.com/problems/n-ary-tree-postorder-traversal/
//
//#include <vector>
//
//#include <set>
//#include <algorithm>
//#include <stack>
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
//    vector<int> postorder(Node* root) {
//
//        if (root == nullptr)
//            return {};
//
//        vector<int> visited;
//        stack<Node*> stack;
//
//        stack.push(root);
//
//        // DFS
//        while (stack.size() > 0)
//        {
//            Node* currNode = stack.top();
//            
//            // Children을 stack에 넣었으면 연결을 끊습니다.
//            // 그래야 방문할 노드인지를 판단할 수 있습니다.
//            // 
//            if (currNode->children.size() > 0)
//            {
//                for (int i = currNode->children.size() - 1; i >= 0; --i)
//                {
//                    stack.push(currNode->children[i]);
//                }
//                currNode->children.clear();
//            }
//            else
//            {
//                stack.pop();
//                visited.push_back(currNode->val);
//            }
//        }
//
//        return visited;
//    }
//};
//
//int main()
//{
//
//    return 0;
//}