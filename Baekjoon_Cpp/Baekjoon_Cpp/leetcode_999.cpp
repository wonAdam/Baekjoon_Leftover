// https://leetcode.com/problems/available-captures-for-rook/
#include <vector>

using namespace std;

class Solution {
private:
    vector<vector<int>> directions{
        {1,     0},
        {-1,    0},
        {0,     1},
        {0,     -1}
    };

private:
    bool IsValidCellIndex(int x, int y, int boardSizeX, int boardSizeY)
    {
        return x >= 0 && x < boardSizeX&& y >= 0 && y < boardSizeY;
    }

public:
    int numRookCaptures(vector<vector<char>>& board) {

        // finding the rook
        int rookY, rookX;
        bool found = false;
        for (int i = 0; i < board.size(); ++i)
        {
            for (int j = 0; j < board[i].size(); ++j)
            {
                if (board[i][j] == 'R')
                {
                    rookY = i;
                    rookX = j;
                    found = true;
                    break;
                }
            }
            if (found)
                break;
        }

        int pawnCnt = 0;
        // check four direction
        for (const vector<int>& dir : directions)
        {
            int currX = rookX; 
            int currY = rookY;
            while (IsValidCellIndex(currX, currY, board[0].size(), board.size()))
            {
                if (board[currY][currX] == 'p')
                {
                    pawnCnt++;
                    break;
                }
                else if (board[currY][currX] == 'B')
                {
                    break;
                }

                currX += dir[0];
                currY += dir[1];
            }
        }

        return pawnCnt;
    }
};

int main()
{
    vector<vector<char>> board;
    board.push_back({ '.', '.', '.', '.', '.', '.', '.', '.' });
    board.push_back({ '.', '.', '.', 'p', '.', '.', '.', '.' });
    board.push_back({ '.', '.', '.', 'R', '.', '.', '.', 'p' });
    board.push_back({ '.', '.', '.', '.', '.', '.', '.', '.' });
    board.push_back({ '.', '.', '.', '.', '.', '.', '.', '.' });
    board.push_back({ '.', '.', '.', 'p', '.', '.', '.', '.' });
    board.push_back({ '.', '.', '.', '.', '.', '.', '.', '.' });
    board.push_back({ '.', '.', '.', '.', '.', '.', '.', '.' });
    int result = Solution().numRookCaptures(board);
    return 0;
}