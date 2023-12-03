using System;
using System.Collections.Generic;
using System.Text;

namespace Baekjoon_CSharp
{
    internal class _2720_LaundaryStoreManagerDonghyuk
    {
        static void Main(string[] arg)
        {
            int t = int.Parse(Console.ReadLine());

            for (int i = 0; i < t; i++)
            {
                int money = int.Parse(Console.ReadLine());

                //25센트 = 1쿼터
                int quarter = money / 25;
                money %= 25;

                //10센트 = 1다임
                int dime = money / 10;
                money %= 10;

                //5센트 = 1니켈
                int nickel = money / 5;
                money %= 5;

                //1센티 = 1페니
                int penny = money / 1;

                Console.WriteLine($"{quarter} {dime} {nickel} {penny}");
            }
        }
    }
}
