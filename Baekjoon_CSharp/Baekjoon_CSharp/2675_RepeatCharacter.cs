//using System;
//using System.Collections.Generic;
//using System.Linq;
//using System.Text;

//namespace Baekjoon_CSharp
//{
//    internal class _2675_RepeatCharacter
//    {
//        static void Main(string[] args)
//        {
//            int t = int.Parse(Console.ReadLine());

//            for(int i = 0; i < t; i++)
//            {
//                var inputList = Console.ReadLine().Split().ToList();

//                int r = int.Parse(inputList[0]);
                
//                StringBuilder sb = new StringBuilder();
//                foreach(char inputChar in inputList[1]) 
//                {
//                    sb.Append(inputChar, r);
//                }

//                Console.WriteLine(sb.ToString());
//            }

//        }
//    }
//}
