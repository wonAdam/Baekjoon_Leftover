//using System;
//using System.Collections.Generic;
//using System.Linq;
//using System.Text;

//namespace Baekjoon_CSharp
//{
//    internal class _2501_Divisor
//    {
//        static void Main(string[] args)
//        {
//            var nk = Console.ReadLine().Split().Select(int.Parse).ToList();
//            int n = nk[0];
//            int k = nk[1];

//            List<int> divisors = new List<int>();
//            for(int i = 1; i <= n; i++) 
//            {
//                if(n % i == 0)
//                {
//                    divisors.Add(i);
//                }
//            }

//            Console.WriteLine(divisors.Count >= k ? divisors[k - 1] : 0);
//        }
//    }
//}
