//using System;
//using System.Collections.Generic;
//using System.Linq;
//using System.Text;

//namespace Baekjoon_CSharp
//{
//    internal class _25191_ChickenDance
//    {
//        static void Main(string[] args)
//        {
//            int chicken = int.Parse(Console.ReadLine());
//            List<int> inputIntList = Console.ReadLine().Split().Select(int.Parse).ToList();

//            int coke = inputIntList[0];
//            int beer = inputIntList[1];

//            int maxCanEat = coke / 2 + beer;

//            Console.WriteLine(Math.Min(maxCanEat, chicken));
//        }
//    }
//}
