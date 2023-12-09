//using System;
//using System.Collections.Generic;
//using System.Linq;
//using System.Text;

//namespace Baekjoon_CSharp
//{
//    internal class _3009_FourthVertex
//    {
//        static void Main(string[] args)
//        {
//            List<int> x = new List<int>();
//            List<int> y = new List<int>();

//            List<int> v1 = Console.ReadLine().Split().Select(int.Parse).ToList();
//            if (x.Contains(v1[0])) x.Remove(v1[0]);
//            else x.Add(v1[0]);
//            if (y.Contains(v1[1])) y.Remove(v1[1]);
//            else y.Add(v1[1]);

//            List<int> v2 = Console.ReadLine().Split().Select(int.Parse).ToList();
//            if (x.Contains(v2[0])) x.Remove(v2[0]);
//            else x.Add(v2[0]);
//            if (y.Contains(v2[1])) y.Remove(v2[1]);
//            else y.Add(v2[1]);

//            List<int> v3 = Console.ReadLine().Split().Select(int.Parse).ToList();
//            if (x.Contains(v3[0])) x.Remove(v3[0]);
//            else x.Add(v3[0]);
//            if (y.Contains(v3[1])) y.Remove(v3[1]);
//            else y.Add(v3[1]);

//            Console.WriteLine($"{x[0]} {y[0]}");
//        }
//    }
//}
