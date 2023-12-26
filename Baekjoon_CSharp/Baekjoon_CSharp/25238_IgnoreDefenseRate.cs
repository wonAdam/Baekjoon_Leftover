//using System;
//using System.Collections.Generic;
//using System.Linq;
//using System.Text;

//namespace Baekjoon_CSharp
//{
//    internal class _25238_IgnoreDefenseRate
//    {
//        static void Main(string[] args)
//        {
//            List<int> inputIntList = Console.ReadLine().Split().Select(int.Parse).ToList();
//            int monsterDefense = inputIntList[0];
//            int ignoreDefenseRate = inputIntList[1];

//            decimal notIgnoreDefenseRate = 1.0M - Math.Clamp(ignoreDefenseRate / 100.0M, 0.0M, 1.0M);
//            decimal finalDefenseRate = monsterDefense * notIgnoreDefenseRate;

//            if (finalDefenseRate < 100.0M)
//            {
//                Console.WriteLine(1);
//            }
//            else
//            {
//                Console.WriteLine(0);
//            }
//        }
//    }
//}
