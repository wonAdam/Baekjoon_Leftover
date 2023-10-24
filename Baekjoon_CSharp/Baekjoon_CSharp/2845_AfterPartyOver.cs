//using System;
//using System.Collections.Generic;
//using System.Linq;
//using System.Text;

//namespace Baekjoon_CSharp
//{
//    internal class _2845_AfterPartyOver
//    {
//        static void Main(string[] args)
//        {
//            var inputIntList = Console.ReadLine().Split().Select(int.Parse).ToList();
//            var size = inputIntList[0];
//            var pplPerSize = inputIntList[1];

//            var totalPpl = size * pplPerSize;

//            var outputIntList = Console.ReadLine().Split().Select(int.Parse).Select((e) => { return e - totalPpl; });
//            Console.WriteLine(String.Join(" ", outputIntList));
//        }
//    }
//}
