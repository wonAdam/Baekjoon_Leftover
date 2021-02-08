//using System;
//using System.Collections.Generic;
//using System.Linq;

//namespace Baekjoon_CSharp
//{
//    class _1764_NotThatIveHeardOrKnown
//    {
//        static  void Main()
//        {
//            int[] nm = Console.ReadLine().Split(" ").Select(i => int.Parse(i)).ToArray();
//            int n = nm[0];
//            int m = nm[1];

//            List<string> nList = new List<string>();
//            List<string> answer = new List<string>();
//            for(int i = 0; i < n+m; i++)
//            {
//                nList.Add(Console.ReadLine());
//            }
//            nList.Sort();
//            for (int i = 0; i < n+m-1; i++)
//            {
//                if (nList[i] == nList[i + 1]) answer.Add(nList[i]);
//            }

//            Console.WriteLine(answer.Count);
//            foreach(var name in answer)
//                Console.WriteLine(name);
                
//        }
//    }
//}
