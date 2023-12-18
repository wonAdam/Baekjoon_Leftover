//using System;
//using System.Collections.Generic;
//using System.Linq;
//using System.Text;

//namespace Baekjoon_CSharp
//{
//    internal class _2875_ContestOrInternship
//    {
//        static void Main(string[] args)
//        {
//            List<int> inputIntList = Console.ReadLine().Split().Select(int.Parse).ToList();
//            int girl = inputIntList[0];
//            int boy = inputIntList[1];
//            int intern = inputIntList[2];

//            int team = 0;

//            while(girl + boy - 3 >= intern &&
//                    girl >= 2 && boy >= 1)
//            {
//                girl -= 2;
//                boy -= 1;
//                team++;
//            }

//            Console.WriteLine(team);
//        }
//    }
//}
