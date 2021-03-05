//using System;
//using System.Collections.Generic;
//using System.Linq;

//namespace Baekjoon_CSharp
//{
//    class _4153_RightTriangle
//    {
//        static void Main()
//        {
//            while(true)
//            {
//                List<int> sides = Console.ReadLine().Split(" ").Select(s => int.Parse(s)).ToList();

//                if (sides.Sum() == 0)
//                    break;

//                int max = sides.Max();
//                int maxIdx = sides.IndexOf(max);

//                int powSum = 0;
//                for(int i = 0; i < 3; i++)
//                {
//                    if (i == maxIdx) continue;

//                    powSum += (int)Math.Pow(sides[i], 2);
//                }

//                if (powSum == Math.Pow(sides[maxIdx], 2))
//                    Console.WriteLine("right");
//                else
//                    Console.WriteLine("wrong");

//            }

//        }
//    }
//}
