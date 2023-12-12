//using System;
//using System.Collections.Generic;
//using System.Linq;
//using System.Text;

//namespace Baekjoon_CSharp
//{
//    internal class _17496_StarFruits
//    {
//        static void Main(string[] args)
//        {
//            List<int> intInputList = Console.ReadLine().Split().Select(int.Parse).ToList();

//            int summerDays = intInputList[0];
//            int growDays = intInputList[1];
//            int growSlots = intInputList[2];
//            int price = intInputList[3];

//            int growCount = summerDays / growDays;
//            growCount -= (summerDays % growDays) == 0 ? 1 : 0;

//            int totalPrice = growCount * growSlots * price;
//            Console.WriteLine(totalPrice);
//        }
//    }
//}
