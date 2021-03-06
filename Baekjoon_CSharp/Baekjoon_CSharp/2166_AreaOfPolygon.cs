using System;
using System.Collections.Generic;
using System.Linq;

namespace Baekjoon_CSharp
{
    class _2166_AreaOfPolygon
    {
        struct Vector
        {
            public int x, y;
            public Vector(int[] xy)
            {
                x = xy[0];
                y = xy[1];
            }
        }
        static void Main()
        {
            int n = int.Parse(Console.ReadLine());

            List<Vector> points = new List<Vector>();
            for (int i = 0; i < n; i++)
                points.Add(new Vector(Console.ReadLine().Split(" ").Select(s => int.Parse(s)).ToArray()));

            int x = 0;
            for (int i = 0; i < points.Count - 1; i++)
                x += points[i].x * points[i + 1].y;

            int y = 0;
            for (int i = 0; i < points.Count - 1; i++)
                y += points[i + 1].x * points[i].y;

            decimal area = Math.Abs(x - y) / 2.0m;
            area = Math.Round(area * 10.0m, MidpointRounding.AwayFromZero);
            area /= 10.0m;

            Console.WriteLine("{0:0.0}", area);
        }
    }
}
