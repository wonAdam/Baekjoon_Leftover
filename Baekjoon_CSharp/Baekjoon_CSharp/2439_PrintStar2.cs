//using System;
//using System.Collections.Generic;
//using System.Text;

//namespace Baekjoon_CSharp
//{
//    internal class _2439_PrintStar2
//    {
//        static void Main(string[] args)
//        {
//            int n = int.Parse(Console.ReadLine());

//            StringBuilder sb = new StringBuilder();
//            for (int i = 0; i < n; i++)
//                sb.Append(' ');

//            for (int i = n; i > 0; i--)
//            {
//                sb.Remove(i - 1, 1);
//                sb.Insert(i - 1, '*');
//                Console.WriteLine(sb.ToString());
//            }
//        }
//    }
//}
