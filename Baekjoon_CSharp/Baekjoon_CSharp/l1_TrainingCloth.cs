//using System;
//using System.Collections.Generic;
//using System.Text;

//namespace Baekjoon_CSharp
//{
//    public class Solution
//    {
        
//        public int solution(int n, int[] lost, int[] reserve)
//        {
//            List<int> clothCounts = new List<int>();

//            int answer = 0;
//            for(int i = 0; i < n; i++)
//            {
//                bool added = false;

//                // is lost
//                for(int j = 0; j < lost.Length; j++)
//                {
//                    if (i == lost[j])
//                    {
//                        clothCounts.Add(0);
//                        added = true;
//                        break;
//                    }
//                }
//                if (added) continue;

//                // is reserve
//                for (int j = 0; j < reserve.Length; j++)
//                {
//                    if (i == reserve[j])
//                    {
//                        clothCounts.Add(2);
//                        added = true;
//                        break;
//                    }
//                }
//                if (added) continue;

//                // is not lost && not reserve
//                if (!added) clothCounts.Add(1);
//            }

//            go(clothCounts, 0);

//            return answer;
//        }

//        public int go(List<int> counts, int currIdx)
//        {
//            int right = 0, left = 0;
//            for(int i = currIdx; i < counts.Count; i++)
//            {
//                // should borrow
//                if(counts[i] == 0)
//                {
//                    if(i > 0 && counts[i-1] > 0)
//                    {
//                        counts[i - 1]--;
//                        counts[i]++;
//                        right = go(counts, i + 1);
//                    }
//                    if(i < counts.Count - 1 && counts[i+1] > 0)
//                    {
//                        counts[i + 1]--;
//                        counts[i]++;
//                        left = go(counts, i + 1);
//                    }
//                }
//            }

//            return Math.Max(right, left);
//        }
//    }
//    class l1_TrainingCloth
//    {
//        static void Main()
//        {

//        }

//    }
//}
