//using System;
//using System.Collections.Generic;
//using System.Text;

//namespace Baekjoon_CSharp
//{
//    internal class _2577_TheNumberOfNumber
//    {
//        static void Main(string[] args)
//        {
//            int a = int.Parse(Console.ReadLine());
//            int b = int.Parse(Console.ReadLine());
//            int c = int.Parse(Console.ReadLine());

//            int mul = a * b * c;

//            List<int> result = new List<int>() { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };

//            while (mul > 0)
//            {
//                result[mul % 10]++;
//                mul /= 10;
//            }

//            foreach (int i in result)
//            {
//                Console.WriteLine(i);
//            }
//        }
//    }
//}
