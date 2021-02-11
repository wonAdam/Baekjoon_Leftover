using System;
using System.Linq;

namespace Baekjoon_CSharp
{
    class codeforces_50A_Dominopiling
    {
        static void Main()
        {
            int[] wh = Console.ReadLine().Split(" ").Select(s => int.Parse(s)).ToArray();
            int[,] board = new int[wh[0], wh[1]];

            int i = 0; 
            int j = 0;
            int count = 0;
            while(i < wh[0] || j < wh[1])
            {
                if(i < wh[0] && j + 1 < wh[1] && board[i, j] == 0 && board[i, j+1] == 0)
                {
                    board[i, j] = 1;
                    board[i, j + 1] = 1;
                    count++;
                    j += 2;
                }
                else if(i + 1 < wh[0] && j< wh[1] && board[i, j] == 0 && board[i+1,j] == 0)
                {
                    board[i, j] = 1;
                    board[i + 1, j] = 1;
                    count++;
                    i++;
                    j = 0;
                }
                else if(i < wh[0] && j + 1 >= wh[1])
                {
                    j = 0;
                    i++;
                }
                else
                {
                    j++;
                }
            }
            Console.WriteLine(count);
        }
    }
}
