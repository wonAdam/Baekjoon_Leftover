//using System;
//using System.Collections.Generic;
//using System.Linq;
//using System.Text;

//namespace Baekjoon_CSharp
//{
//    internal class _14720_MilkFestival
//    {
//        static void Main(string[] args)
//        {
//            int storeCount = int.Parse(Console.ReadLine());
//            List<int> stores = Console.ReadLine().Split().Select(int.Parse).ToList();
//            int wantToDrink = 0;

//            int didDrink = 0;

//            for (int currentStoreIndex = 0; currentStoreIndex < storeCount; currentStoreIndex++)
//            {
//                if (stores[currentStoreIndex] == wantToDrink) 
//                {
//                    wantToDrink = (wantToDrink + 1) % 3;
//                    didDrink++;
//                }
//            }

//            Console.WriteLine(didDrink);
//        }
//    }
//}
