//using System;

//namespace Baekjoon_CSharp
//{
//    class codeforces_71A_WayTooLongWords
//    {

//        static void Main()
//        {
//            int n = int.Parse(Console.ReadLine());

//            string[] result = new string[n];
//            for(int i = 0; i < n; i++)
//            {
//                string input = Console.ReadLine();
//                result[i] = input.Length > 10 ? $"{input[0]}{input.Length-2}{input[input.Length-1]}" : input;
//            }

//            foreach(var s in result)
//                Console.WriteLine(s);
//        }
//    }
//}
