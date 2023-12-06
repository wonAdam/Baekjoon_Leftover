//using System;
//using System.Collections.Generic;
//using System.Drawing;
//using System.Linq;
//using System.Text;

//namespace Baekjoon_CSharp
//{
//    internal class _10809_FindingAlphabet
//    {
//        static void Main(string[] args)
//        {
//            List<int> result = Enumerable.Repeat(-1, 'z' - 'a' + 1).ToList();

//            string input = Console.ReadLine();
//            for(int i = 0; i < input.Length; i++) 
//            {
//                if (result[input[i] - 'a'] == -1)
//                {
//                    result[input[i] - 'a'] = i;
//                }
//            }

//            Console.WriteLine(String.Join(' ', result));
//        }
//    }
//}
