//using System;
//using System.Collections.Generic;
//using System.Text;

//namespace Baekjoon_CSharp
//{
//    internal class _10101_MemorizingTriangle
//    {
//        static void Main(string[] args)
//        {
//            int a = int.Parse(Console.ReadLine());
//            int b = int.Parse(Console.ReadLine());
//            int c = int.Parse(Console.ReadLine());

//            if(a == b && a == c && b == c && a == 60)
//            {
//                Console.WriteLine("Equilateral");
//            }
//            else if((a + b + c) == 180)
//            {
//                if(a == b || a == c || b == c)
//                {
//                    Console.WriteLine("Isosceles");
//                }
//                else
//                {
//                    Console.WriteLine("Scalene");
//                }
//            }
//            else
//            {
//                Console.WriteLine("Error");
//            }
//        }
//    }
//}
