//using System;
//using System.Collections.Generic;
//using System.Linq;
//using System.Text;

//namespace Baekjoon_CSharp
//{
//    internal class _2884_AlarmClock
//    {
//        static void Main(string[] args)
//        {
//            var inputList = Console.ReadLine().Split().Select(int.Parse).ToList();
//            int h = inputList[0];
//            int m = inputList[1];

//            DateTime dateTime = DateTime.Today;
//            TimeSpan timeSpan = new TimeSpan(h, m, 0);
//            dateTime = dateTime.Add(timeSpan);

//            dateTime = dateTime.Subtract(new TimeSpan(0, 45, 0));
//            Console.WriteLine($"{dateTime.Hour} {dateTime.Minute}");
//        }
//    }
//}
