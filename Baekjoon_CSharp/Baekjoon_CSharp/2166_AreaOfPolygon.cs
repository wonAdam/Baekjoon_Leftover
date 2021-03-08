//using System;
//using System.Collections.Generic;
//using System.Linq;

//namespace Baekjoon_CSharp
//{
//    class _2166_AreaOfPolygon
//    {
//        struct Vector
//        {
//            public Int64 x, y;
//            public Vector(Int64[] xy)
//            {
//                x = xy[0];
//                y = xy[1];
//            }
//        }
//        static void Main()
//        {
//            // 입력
//            int n = int.Parse(Console.ReadLine());
            
//            List<Vector> points = new List<Vector>();
//            for (int i = 0; i < n; i++)
//                points.Add(new Vector(Console.ReadLine().Split(" ").Select(s => Int64.Parse(s)).ToArray()));

//            // 신발끈공식
//            Int64 x = 0;
//            for (int i = 0; i < points.Count; i++)
//                x += points[i].x * points[(i + 1) % points.Count].y;

//            Int64 y = 0;
//            for (int i = 0; i < points.Count; i++)
//                y += points[(i + 1) % points.Count].x * points[i].y;

//            // 반올림
//            double area = Math.Abs((double)x - (double)y) / 2.0d;
//            area = Math.Round(area * 10.0d, MidpointRounding.AwayFromZero);
//            area /= 10.0d;

//            // 결과 출력
//            Console.WriteLine("{0:0.0}", area);
//        }
//    }
//}
