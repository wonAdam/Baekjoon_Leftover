//// https://leetcode.com/problems/construct-string-from-binary-tree/
//
//#include <string>
//
//#include <stack>
//#include <sstream>
//#include <set>
//
//using namespace std;
//
//
// //* Definition for a binary tree node.
// struct TreeNode {
//     int val;
//     TreeNode *left;
//     TreeNode *right;
//     TreeNode() : val(0), left(nullptr), right(nullptr) {}
//     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
// };
// 
//class Solution {
//private:
//    TreeNode* root;
//    stringstream ss;
//
//    void recursive(TreeNode* nextNode)
//    {
//        if (nextNode == nullptr)
//        {
//            ss << "()";
//            return;
//        }
//
//        if (this->root == nextNode)
//        {
//            ss << nextNode->val;
//        }
//        else
//        {
//            ss << '(' << nextNode->val;
//        }
//
//        if (!nextNode->left && nextNode->right) // left X right O
//        {
//            recursive(nullptr);
//            recursive(nextNode->right);
//        }
//        else if(nextNode->left && nextNode->right) // left O right O
//        {
//            recursive(nextNode->left);
//            recursive(nextNode->right);
//        }
//        else if (nextNode->left && !nextNode->right) // left O right X
//        {
//            recursive(nextNode->left);
//        }
//
//
//        if (this->root != nextNode)
//        {
//            ss << ')';
//        }
//    }
//
//public:
//    string tree2str(TreeNode* root) {
//        this->root = root;
//
//        recursive(root);
//        return ss.str();
//    }
//};
//
//int main()
//{
//    TreeNode* root = new TreeNode(1);
//    //TreeNode* two = new TreeNode(2);
//    //TreeNode* three = new TreeNode(3);
//    //TreeNode* four = new TreeNode(4);
//    //root->left = two;
//    //root->right = three;
//    //two->left = four;
//
//    string reusult = Solution().tree2str(root);
//    return 0;
//}