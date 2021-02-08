//using System;
//using System.Linq;
//using System.Text.RegularExpressions;

//namespace Baekjoon_CSharp
//{
//    class _1439_Flipping
//    {
//        static void Main()
//        {
//            string[] s = Regex.Split(Console.ReadLine(), String.Empty).Where(c => c != "").ToArray();
//            int zero2one = s[0] == "1" ? 1 : 0;
//            int one2zero = s[0] == "0" ? 1 : 0;

//            for(int i = 0; i < s.Length-1; i++)
//            {
//                if(s[i] != s[i+1])
//                {
//                    if (s[i] == "0") zero2one += 1;
//                    else one2zero += 1;
//                }
//            }

//            Console.WriteLine(Math.Min(one2zero, zero2one));

//        }
//    }
//}
