//using System;
//using System.Collections.Generic;
//using System.Linq;
//using System.Text;

//namespace Baekjoon_CSharp
//{
//    internal class _2530_AIClock
//    {
//        static void Main(string[] args)
//        {
//            var inputIntList = Console.ReadLine().Split().Select(int.Parse).ToList();
//            int a = inputIntList[0];
//            int b = inputIntList[1];
//            int c = inputIntList[2];
//            int d = int.Parse(Console.ReadLine());

//            int da = (d / (60 * 60));
//            d -= da * (60 * 60);
//            int db = (d / 60);
//            d -= db * 60;
//            int dc = (d % 60);
//            d -= dc;

//            c += dc;
//            b += (db) + (c / 60);
//            c %= 60;
//            a += (da) + (b / 60);
//            b %= 60;
//            a %= 24;

//            Console.WriteLine($"{a} {b} {c}");
//        }
//    }
//}
