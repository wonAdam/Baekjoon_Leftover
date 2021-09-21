//#include <string>
//#include <stack>
//
//using namespace std;
//
//class Solution {
//public:
//    bool isValid(const string& s) {
//        stack<char> stack;
//
//        for (const char& c : s)
//        {
//            switch (c)
//            {
//            case '}':
//            {
//                if (stack.size() > 0 && stack.top() == '{')
//                    stack.pop();
//                else
//                    return false;
//
//                break;
//            }
//            case ')':
//            {
//                if (stack.size() > 0 && stack.top() == '(')
//                    stack.pop();
//                else
//                    return false;
//
//                break;
//            }
//            case ']':
//            {
//                if (stack.size() > 0 && stack.top() == '[')
//                    stack.pop();
//                else
//                    return false;
//
//                break;
//            }
//            case '{':
//            case '(':
//            case '[':
//            {
//                stack.push(c);
//                break;
//            }
//            default:
//                break;
//            }
//        }
//
//        return stack.size() == 0;
//    }
//};
//
//
//int main()
//{
//    Solution sol;
//    sol.isValid("{}");
//    return 0;
//}