//using System;
//using System.Collections.Generic;
//using System.Linq;
//using System.Text;

//namespace Baekjoon_CSharp
//{
//    internal class _2490_Yutnori
//    {
//        static void Main(string[] args)
//        {
//            var inputList1 = Console.ReadLine().Split().Select(int.Parse).ToList();
//            var inputList2 = Console.ReadLine().Split().Select(int.Parse).ToList();
//            var inputList3 = Console.ReadLine().Split().Select(int.Parse).ToList();

//            List<char> result = new List<char>() { 'D', 'C', 'B', 'A', 'E' };

//            Console.WriteLine(result[inputList1.Aggregate((elem, accum) => accum + elem)]);
//            Console.WriteLine(result[inputList2.Aggregate((elem, accum) => accum + elem)]);
//            Console.WriteLine(result[inputList3.Aggregate((elem, accum) => accum + elem)]);
//        }
//    }
//}
