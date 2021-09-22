// https://leetcode.com/problems/increasing-subsequences/
#include <vector>
#include <stack>
#include <set>
using namespace std;
class Solution {
public:
    vector<vector<int>> findSubsequences(const vector<int>& nums) {
        set<vector<int>> result;
        
        stack<vector<int>> stack;

        for (int i = 0 ; i < nums.size(); ++i)
            stack.push(vector<int>{ i });

        while (!stack.empty())
        {
            vector<int> e = stack.top();
            stack.pop();

            if (e.size() > 1)
            {
                vector<int> sequence;
                for (const int& index : e)
                    sequence.push_back(nums[index]);

                result.insert(sequence);
            }
            
            for (int i = e[e.size() - 1] + 1; i < nums.size(); ++i)
            {
                if (nums[i] >= nums[e[e.size() - 1]])
                {
                    e.push_back(i);
                    stack.push(e);
                    e.pop_back();
                }
            }
        }

        return vector<vector<int>>(result.begin(), result.end());
    }
};


int main()
{
    Solution sol;
    vector<vector<int>> result = sol.findSubsequences(vector<int>{ 4,6,7,7 });

    return 0;
}