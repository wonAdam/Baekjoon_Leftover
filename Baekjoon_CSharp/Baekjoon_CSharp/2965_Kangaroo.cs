//using System;
//using System.Collections.Generic;
//using System.Linq;
//using System.Text;

//namespace Baekjoon_CSharp
//{
//    internal class _2965_Kangaroo
//    {
//        static void Main(string[] args)
//        {
//            // 3 5 9
//            // 5 6 9 -> 1
//            // 6 7 9 -> 2
//            // 7 8 9 -> 3

//            // 3 9 10
//            // 3 8 9 -> 1
//            // 3 7 8 -> 2
//            // 3 6 7 -> 3
//            // 3 5 6 -> 4
//            // 3 4 5 -> 5

//            var inputList = Console.ReadLine().Split().Select(int.Parse).ToList();
//            int count = 0;
//            if (inputList[1] - inputList[0] > inputList[2] - inputList[1])
//            {
//                while (inputList[0] + 1 != inputList[1])
//                {
//                    inputList[2] = inputList[1] - 1;
//                    inputList.Sort();
//                    count++;
//                }
//            }
//            else
//            {
//                while (inputList[1] + 1 != inputList[2])
//                {
//                    inputList[0] = inputList[1] + 1;
//                    inputList.Sort();
//                    count++;
//                }
//            }

//            Console.WriteLine(count);
//        }
//    }
//}
