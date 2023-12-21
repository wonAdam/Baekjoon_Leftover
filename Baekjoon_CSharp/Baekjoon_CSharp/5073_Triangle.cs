//using System;
//using System.Collections.Generic;
//using System.Linq;
//using System.Text;

//namespace Baekjoon_CSharp
//{
//    internal class _5073_Triangle
//    {
//        static void Main(string[] args)
//        {
//            while(true)
//            {
//                List<int> inputIntList = Console.ReadLine().Split().Select(int.Parse).ToList();

//                int a = inputIntList[0];
//                int b = inputIntList[1];
//                int c = inputIntList[2];

//                if (a == 0 && b == 0 && c == 0)
//                    break;

//                int max = Math.Max(Math.Max(a, b), c);
//                if (max >= a + b + c - max)
//                {
//                    Console.WriteLine("Invalid");
//                }
//                else
//                {
//                    if (a == b && b == c)
//                    {
//                        Console.WriteLine("Equilateral");
//                    }
//                    else if (a == b || a == c || b == c)
//                    {
//                        Console.WriteLine("Isosceles");
//                    }
//                    else
//                    {
//                        Console.WriteLine("Scalene");
//                    }
//                }
//            }
//        }
//    }
//}
