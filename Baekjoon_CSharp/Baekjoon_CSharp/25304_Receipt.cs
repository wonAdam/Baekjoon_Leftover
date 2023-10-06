//using System;
//using System.Collections.Generic;
//using System.Text;

//namespace Baekjoon_CSharp
//{
//    internal class _25304_Receipt
//    {
//        static void Main(string[] args)
//        {
//            string xStr = Console.ReadLine();
//            int x = int.Parse(xStr);

//            string nStr = Console.ReadLine();
//            int n = int.Parse(nStr);

//            int realPrice = 0;
//            for(int i = 0; i < n; i++)
//            {
//                string input = Console.ReadLine();
//                string[] inputArr = input.Split(' ');

//                int a = int.Parse(inputArr[0]);
//                int b = int.Parse(inputArr[1]);

//                realPrice += (a * b);
//            }

//            if(realPrice == x) 
//            {
//                Console.WriteLine("Yes");
//            }
//            else
//            {
//                Console.WriteLine("No");
//            }

//        }
//    }
//}
