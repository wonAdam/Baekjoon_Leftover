//#include <string>
//#include <stack>
//
//int solution(std::string s) {
//
//    int answer = 0;
//
//    int len = s.length();
//    for (int i = 0; i < len; i++)
//    {
//        std::stack<char> stack;
//
//        bool isMatching = true;
//        for (char curr : s)
//        {
//            if (curr == '(' || curr == '[' || curr == '{')
//                stack.push(curr);
//
//            else
//            {
//                if (stack.empty()) 
//                {
//                    isMatching = false;
//                    break;
//                }
//
//                char top = stack.top();
//
//                if (curr == ')')
//                    if (top == '(')
//                        stack.pop();
//                    else
//                    {
//                        isMatching = false;
//                        break;
//                    }
//                else if (curr == ']')
//                    if (top == '[')
//                        stack.pop();
//                    else
//                    {
//                        isMatching = false;
//                        break;
//                    }
//                else if (curr == '}')
//                    if (top == '{')
//                        stack.pop();
//                    else
//                    {
//                        isMatching = false;
//                        break;
//                    }
//            }
//        }
//
//        if (isMatching && stack.empty())
//            answer++;
//    
//        // rotate
//        char front = s[0];
//        s.erase(0, 1);
//        s.push_back(front);
//    }
//
//    return answer;
//}
//
//
//
//#include <iostream>
//int main()
//{
//    int r = solution("}]()[{");
//}