// https://leetcode.com/problems/kth-missing-positive-number/

#include <vector>
using namespace std;

class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int cnt = 0;
        int currIndex = 0;
        for (int i = 1; ; ++i)
        {
            if (arr.size() <= currIndex || arr[currIndex] != i)
            {
                if (++cnt == k)
                {
                    return i;
                }
            }
            else
            {
                ++currIndex;
            }
        }
    }
};

int main()
{
    vector<int> arr{ 1,2,3,4 };
    int result = Solution().findKthPositive(arr, 2);
    return 0;
}