//using System;
//using System.Collections.Generic;
//using System.Linq;
//using System.Text;

//namespace Baekjoon_CSharp
//{
//    internal class _2506_CalcScore
//    {
//        static void Main(string[] args)
//        {
//            // 첫 입력 버리기
//            Console.ReadLine();

//            List<int> intInputList = Console.ReadLine().Split().Select(int.Parse).ToList();

//            int score = 0;
//            int accum = 0;
//            foreach(int intInput in intInputList)
//            {
//                if(intInput == 1)
//                {
//                    accum++;
//                }
//                else // 0
//                {
//                    accum = 0;
//                }

//                score += accum;
//            }

//            Console.WriteLine(score);
//        }
//    }
//}
