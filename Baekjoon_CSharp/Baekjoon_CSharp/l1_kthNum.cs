using System;
using System.Collections.Generic;
using System.Linq;

namespace Baekjoon_CSharp
{
    public class Solution
    {

        public int[] solution(int[] array, int[,] commands)
        {
            int commandsCount = commands.GetLength(0);
            int[] answer = new int[commandsCount];

            List<int> arr = new List<int>(array);
            
            for(int i = 0; i < commandsCount; i++)
            {
                int begin = commands[i, 0];
                int end = commands[i, 1];
                int idx = commands[i, 2];

                List<int> slicedNSorted = arr.Where((x, j) => j >= begin-1 && j < end).OrderBy(x => x).ToList();
                answer[i] = slicedNSorted[idx-1];
            }

            return answer;
        }
    }
    class l1_kthNum
    {
        static void Main()
        {
            Solution s = new Solution();
            int[] arr = new int[] { 1, 5, 2, 6, 3, 7, 4 };
            int[,] commands = new int[,] { {2, 5, 3}, {4, 4, 1}, {1, 7, 3} };

            int[] answer = s.solution(arr, commands);
        }



    }
}
