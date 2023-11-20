//using System;
//using System.Collections.Generic;
//using System.Text;

//namespace Baekjoon_CSharp
//{
//    internal class _3460_BinaryNumber
//    {
//        static void Main(string[] args)
//        {
//            int t = int.Parse(Console.ReadLine());

//            for(int i = 0; i < t; i++)
//            {
//                int n = int.Parse(Console.ReadLine());
//                List<int> list = new List<int>();
//                for(int j = 0; n > 0; j++)
//                {
//                    if(n % 2 != 0)
//                        list.Add(j);

//                    n = n >> 1;
//                }

//                Console.WriteLine(String.Join(" ", list));
//            }
//        }
//    }
//}
