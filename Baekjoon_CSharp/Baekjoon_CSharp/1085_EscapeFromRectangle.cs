//using System;
//using System.Collections.Generic;
//using System.Linq;
//using System.Text;

//namespace Baekjoon_CSharp
//{
//    internal class _1085_EscapeFromRectangle
//    {
//        static void Main(string[] args)
//        {
//            var inputList = Console.ReadLine().Split().Select(int.Parse).ToList();
//            int x = inputList[0];
//            int y = inputList[1];
//            int w = inputList[2];
//            int h = inputList[3];

//            int horizontalLength1 = Math.Abs(x - w);
//            int horizontalLength2 = x;
//            int horizontalMin = Math.Min(horizontalLength1, horizontalLength2);

//            int verticalLength1 = Math.Abs(y - h);
//            int verticalLength2 = y;
//            int verticalMin = Math.Min(verticalLength1, verticalLength2);

//            Console.WriteLine(Math.Min(horizontalMin, verticalMin));
//        }
//    }
//}
