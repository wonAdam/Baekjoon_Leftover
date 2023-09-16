//using System;
//using System.Collections.Generic;
//using System.Linq;
//using System.Text;

//namespace Baekjoon_CSharp
//{
//    internal class _2869_SnailWannaClimb
//    {
//        static void Main(string[] args)
//        {
//            List<int> input = Console.ReadLine().Split(' ').Select(int.Parse).ToList();
//            int a = input[0];
//            int b = input[1];
//            int v = input[2];

//            int div = (v - b) / (a - b);
//            int remain = (v - b) % (a - b);

//            Console.WriteLine(remain > 0 ? div + 1 : div);
//        }
//    }
//}
