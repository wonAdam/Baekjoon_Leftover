////
//
//#include <string>
//#include <stack>
//#include <queue>
//#include <vector>
//#include <list>
//
//using namespace std;
//
//class Solution {
//public:
//    int minInsertions(string s) 
//    {
//        int l = s.length(), count = 0;
//        stack<char> st;
//        for (int i = 0; i < l; ++i) {
//            if (s[i] == '(')
//            {
//                st.push(s[i]);
//            }
//            else 
//            {
//                if (i + 1 < l and s[i + 1] == ')') 
//                {
//                    if (st.size()) // ( ))
//                    { 
//                        st.pop();
//                    }
//                    else // ))
//                    {
//                        count++;
//                    }
//                    i++;
//                }
//                else 
//                {
//                    if (st.size())  // ( )
//                    {
//                        count++;
//                        st.pop();
//                    }
//                    else // )
//                    {
//                        count += 2;
//                    }
//                }
//            }
//        }
//        return 2 * st.size() + count;
//    }
//};
//
//int main()
//{
//    // "(((()(()((())))(((()())))()())))(((()(()()((()()))"
//    // "(((()(()(|||)))(((()|||))()|||))(((()(()()((()|||)"
//    //  8   221 2   1 2 8  2   1 1    1  8  24 2224 1    2
//    int result = Solution().minInsertions("(((()(()((())))(((()())))()())))(((()(()()((()()))");
//    return 0;
//}