//using System;
//using System.Collections.Generic;
//using System.Linq;
//using System.Text;

//namespace Baekjoon_CSharp
//{
//    internal class _1978_FindingPrimeNumbers
//    {
//        static void Main(string[] args)
//        {
//            Console.ReadLine();

//            var inputList = Console.ReadLine().Split().Select(int.Parse).ToList();
//            inputList.Sort();

//            int PrimeNumberCount = 0;
//            foreach(var input in inputList)
//            {
//                if (input == 1)
//                    continue;

//                bool bIsPrimeNumber = true;
//                for(int i = 2; i < input; i++)
//                {
//                    if(input % i == 0)
//                    {
//                        bIsPrimeNumber = false;
//                        break;
//                    }
//                }

//                if(bIsPrimeNumber == true)
//                {
//                    PrimeNumberCount++;
//                }
//            }

//            Console.WriteLine(PrimeNumberCount);
//        }
//    }
//}
