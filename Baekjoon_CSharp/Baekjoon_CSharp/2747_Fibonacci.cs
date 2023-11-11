//using System;
//using System.Collections.Generic;
//using System.Text;

//namespace Baekjoon_CSharp
//{
//    internal class _2747_Fibonacci
//    {
//        static void Main(string[] args)
//        {
//            int a = 0;
//            int b = 1;

//            int n = int.Parse(Console.ReadLine());

//            int current_n = 1;
//            while(current_n < n) 
//            {
//                int c = a + b;
//                current_n++;
//                a = b;
//                b = c;
//            }

//            Console.WriteLine(b);
//        }
//    }
//}
