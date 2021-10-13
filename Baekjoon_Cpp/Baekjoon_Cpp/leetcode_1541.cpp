//

#include <string>
#include <stack>
#include <queue>
#include <vector>
#include <list>

using namespace std;

class Solution {
public:
    int minInsertions(string s) 
    {
        vector<char> v;
        for (const char& c : s)
        {
            switch (c)
            {
            case '(':
            {
                v.push_back(c);
                break;
            }

            case ')':
            {
                if (v.size() >= 2)
                {
                    char back1 = v.back();
                    v.pop_back();
                    char back2 = v.back();
                    v.pop_back();
                    if (back1 == ')' && back2 == '(')
                    {
                    }
                    else
                    {
                        v.push_back(back2);
                        v.push_back(back1);
                        v.push_back(c);
                    }
                }
                else
                {
                    v.push_back(c);
                }
                
                break;
            }

            default:
                break;
            }
        }

        int cnt = 0;
        list<char> li(v.begin(), v.end());
        for (auto it = li.begin(); it != li.end(); ++it)
        {
            switch (*it)
            {
            case '(':
            {
                auto it1 = it++;
                // ... - it1 '(' - it - ...
                if (it == li.end())
                {

                }
                auto it2 = it++;
                // ... - it1 '(' - it2 - it - ...
                if (it == li.end())
                {

                }



                break;
            }

            case ')':
            {

                break;
            }

            default:
                break;
            }
        }

        return cnt;
    }
};

int main()
{
    // "(((()(()((())))(((()())))()())))(((()(()()((()()))"
    // "(((()(()(|||)))(((()|||))()|||))(((()(()()((()|||)"
    //  8   221 2   1 2 8  2   1 1    1  8  24 2224 1    2
    int result = Solution().minInsertions("(((()(()((())))(((()())))()())))(((()(()()((()()))");
    return 0;
}