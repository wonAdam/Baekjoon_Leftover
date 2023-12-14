//using System;
//using System.Collections.Generic;
//using System.Linq;
//using System.Text;

//namespace Baekjoon_CSharp
//{
//    internal class _1547_Ball
//    {
//        static void Main(string[] args)
//        {
//            int m = int.Parse(Console.ReadLine());

//            int ball = 1;
//            for(int i = 0; i < m; i++)
//            {
//                List<int> inputIntList = Console.ReadLine().Split().Select(int.Parse).ToList();
//                if (inputIntList[0] == ball)
//                {
//                    ball = inputIntList[1];
//                }
//                else if (inputIntList[1] == ball)
//                {
//                    ball = inputIntList[0];
//                }
//            }

//            Console.WriteLine(ball);
//        }
//    }
//}
