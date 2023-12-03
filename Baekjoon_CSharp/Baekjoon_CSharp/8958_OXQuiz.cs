//using System;
//using System.Collections.Generic;
//using System.Text;

//namespace Baekjoon_CSharp
//{
//    internal class _8958_OXQuiz
//    {
//        static void Main(string[] args)
//        {
//            int n = int.Parse(Console.ReadLine());

//            for(int i = 0; i < n; i++)
//            {
//                string inputString = Console.ReadLine();

//                int score = 0;
//                int accum = 0;
//                foreach(char inputChar in inputString)
//                {
//                    if(inputChar == 'O')
//                    {
//                        accum++;
//                    }
//                    else if(inputChar == 'X')
//                    {
//                        accum = 0;
//                    }
//                    score += accum;
//                }

//                Console.WriteLine(score);
//            }
//        }
//    }
//}
