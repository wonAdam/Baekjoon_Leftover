//using System;
//using System.Collections.Generic;
//using System.Text;

//namespace Baekjoon_CSharp
//{
//    internal class _2720_LaundaryStoreManagerDonghyuk
//    {
//        static void Main(string[] arg)
//        {
//            int t = int.Parse(Console.ReadLine());

//            for(int i = 0; i < t; i++)
//            {
//                int c = int.Parse(Console.ReadLine());

//                //25센트 = 1쿼터
//                int quarter = c / 25;
//                c -= quarter * 25;

//                //10센트 = 1다임
//                int dime = c / 10;
//                c -= dime * 10;

//                //5센트 = 1니켈
//                int nickel = c / 5;
//                c -= nickel * 5;

//                //1센티 = 1페니
//                int penny = c / 1;
//                c -= penny * 1;

//                Console.WriteLine($"{quarter} {dime} {nickel} {penny}");
//            }
//        }
//    }
//}
