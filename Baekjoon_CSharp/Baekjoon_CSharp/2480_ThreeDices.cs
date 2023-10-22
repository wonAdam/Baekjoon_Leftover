//using System;
//using System.Collections.Generic;
//using System.Linq;
//using System.Text;

//namespace Baekjoon_CSharp
//{
//    internal class _2480_ThreeDices
//    {
//        static void Main(string[] args)
//        {
//            Dictionary<int, int> rollResults = new Dictionary<int, int>();

//            List<int> inputs = Console.ReadLine().Split().Select(int.Parse).ToList();
//            foreach (int input in inputs)
//            {
//                if (rollResults.ContainsKey(input))
//                    rollResults[input]++;
//                else
//                    rollResults.Add(input, 1);
//            }

//            var chosenPair = rollResults.Aggregate((pair1, pair2) => 
//            {
//                ////////////////////////////////
//                // 최대한 많이 나온 눈
//                if (pair1.Value > pair2.Value)
//                    return pair1;
//                else if (pair1.Value < pair2.Value)
//                    return pair2;
//                ////////////////////////////////
//                // 최대한 큰 눈
//                else if (pair1.Key > pair2.Key)
//                    return pair1;
//                else if (pair1.Key < pair2.Key)
//                    return pair2;

//                // never gonna happen
//                return pair1;
//            });

//            if(chosenPair.Value == 3)
//                Console.WriteLine(10000 + chosenPair.Key * 1000);
//            else if (chosenPair.Value == 2)
//                Console.WriteLine(1000 + chosenPair.Key * 100);
//            else
//                Console.WriteLine(chosenPair.Key * 100);
//        }
//    }
//}
