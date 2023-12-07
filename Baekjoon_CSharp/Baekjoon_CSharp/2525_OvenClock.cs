//using System;
//using System.Collections.Generic;
//using System.Linq;
//using System.Text;

//namespace Baekjoon_CSharp
//{
//    internal class _2525_OvenClock
//    {
//        static void Main(string[] args)
//        {
//            List<int> inputIntList = Console.ReadLine().Split().Select(int.Parse).ToList();
//            int currentHour = inputIntList[0];
//            int currentMinute = inputIntList[1];

//            // 전부 분 단위로 풀어버린다.
//            int currentTimeInMinute = currentMinute + currentHour * 60;

//            int durationMinute = int.Parse(Console.ReadLine());

//            int resultTimeInMinute = currentTimeInMinute + durationMinute;

//            int resultTimeHour = (resultTimeInMinute / 60) % 24;
//            int resultTimeMinute = resultTimeInMinute % 60;

//            Console.WriteLine($"{resultTimeHour} {resultTimeMinute}");
//        }
//    }
//}
