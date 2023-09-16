//using System;
//using System.Collections;
//using System.Collections.Generic;
//using System.Linq;
//using System.Text;

//namespace Baekjoon_CSharp
//{
//    internal class _10810_PuttingBallIn
//    {
//        static void Main(string[] args)
//        {
//            List<int> parseResult = Console.ReadLine().Split(' ').Select(int.Parse).ToList();
//            int n = parseResult[0]; 
//            int m = parseResult[1];

//            int[] baskets = new int[n];

//            for(int put = 0; put < m; put++)
//            {
//                List<int> parseResult2 = Console.ReadLine().Split(' ').Select(int.Parse).ToList();
//                int i = parseResult2[0];
//                int j = parseResult2[1];
//                int k = parseResult2[2];

//                for(int curr = i; curr <= j; curr++)
//                {
//                    baskets[curr - 1] = k;
//                }
//            }
            
//            Console.WriteLine(String.Join(' ', baskets));
//        }
//    }
//}
