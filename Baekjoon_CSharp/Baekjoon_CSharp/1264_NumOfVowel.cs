//using System;
//using System.Collections.Generic;
//using System.Linq;
//using System.Text;

//namespace Baekjoon_CSharp
//{
//    internal class _1264_NumOfVowel
//    {
//        static List<char> vowels = new List<char>() { 'a', 'A', 'e', 'E', 'i', 'I', 'o', 'O', 'u', 'U' };

//        static void Main(string[] args)
//        {
//            while (true)
//            {
//                string input = Console.ReadLine();
//                if (input == "#")
//                    break;

//                Console.WriteLine(input.Count((c) => { return vowels.Contains(c); }));
//            }
//        }
//    }
//}
