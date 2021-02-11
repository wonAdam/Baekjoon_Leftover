//using System;
//using System.Linq;

//namespace Baekjoon_CSharp
//{
//    class codeforces_158A_NextRound
//    {
//        static void Main()
//        {
//            int[] nk = Console.ReadLine().Split(" ").Select(s => int.Parse(s)).ToArray();

//            int[] scores = Console.ReadLine().Split(" ").Select(s => int.Parse(s)).ToArray();

//            int idx = nk[1] - 1;
//            int cut = scores[idx];
//            if(cut <= 0)
//            {
//                Console.WriteLine(scores.Count(score => score > 0));
//                return;
//            }

//            while (idx < scores.Length && scores[idx] == cut) idx++;

//            Console.WriteLine(idx);

//        }
//    }
//}
