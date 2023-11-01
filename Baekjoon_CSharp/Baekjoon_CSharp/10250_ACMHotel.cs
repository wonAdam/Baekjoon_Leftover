//using System;
//using System.Collections.Generic;
//using System.Linq;
//using System.Text;

//namespace Baekjoon_CSharp
//{
//    internal class _10250_ACMHotel
//    {
//        static void Main(string[] args)
//        {
//            int t = int.Parse(Console.ReadLine());

//            for(int i = 0; i < t; i++)
//            {
//                var inputList = Console.ReadLine().Split().Select(int.Parse).ToList();
//                int h = inputList[0];
//                int w = inputList[1];
//                int m = inputList[2];

//                int floor = m % h;
//                int number = (m - 1) / h + 1;

//                string floorPart = floor == 0 ? h.ToString() : floor.ToString(); 
//                string numberPart = number < 10 ? "0" + number.ToString() : number.ToString(); 
//                Console.WriteLine($"{floorPart}{numberPart}");
//            }
//        }
//    }
//}
