//using System;
//using System.Collections.Generic;
//using System.Linq;
//using System.Text;

//namespace Baekjoon_CSharp
//{
//    internal class _2455_IntelligentTrain
//    {
//        static void Main(string[] args)
//        {
//            int curr = 0;
//            int max = 0;
//            for(int i = 0; i < 4; i++)
//            {
//                List<int> input = Console.ReadLine().Split(' ').Select(int.Parse).ToList();
//                int getOff = input[0];
//                int getOn = input[1];

//                curr = Math.Min(curr + (getOn - getOff), 10000);
//                max = Math.Max(max, curr);
//            }

//            Console.WriteLine( max );
//        }
//    }
//}
