//using System;
//using System.Collections.Generic;
//using System.Linq;
//using System.Text;

//namespace Baekjoon_CSharp
//{
//    internal class _3003_KingQueenRookBishop
//    {
//        static void Main(string[] args)
//        {
//            List<int> desired = new List<int>() { 1, 1, 2, 2, 2, 8 };
//            List<int> inputInt = Console.ReadLine().Split().Select(int.Parse).ToList();

//            for(int i = 0; i < desired.Count; i++) 
//            {
//                desired[i] -= inputInt[i];
//            }

//            Console.WriteLine(String.Join(' ', desired));
//        }
//    }
//}
