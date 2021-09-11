//using System;
//using System.Collections.Generic;
//using System.Linq;

//namespace Baekjoon_CSharp
//{
//    class _1708_ConvexHull
//    {
//        struct Vector2
//        {
//            public long x;
//            public long y;
//            public Vector2(long x, long y) { this.x = x; this.y = y; }
//            public static bool operator==(Vector2 lhs, Vector2 rhs) => lhs.x == rhs.x && lhs.y == rhs.y;
//            public static bool operator!=(Vector2 lhs, Vector2 rhs) => !(lhs == rhs);
//            public long CrossProduct(Vector2 v) => x * v.y - v.x * y;
//            public static Vector2 operator -(Vector2 lhs, Vector2 rhs) => new Vector2(lhs.x - rhs.x, lhs.y - rhs.y);
//        }

//        static void Main()
//        {
//            int n = int.Parse(Console.ReadLine());

//            List<Vector2> points = new List<Vector2>();
//            for(int i = 0; i < n; i++)
//            {
//                long[] xy = Console.ReadLine().Split().Select(n => long.Parse(n)).ToArray();
//                points.Add(new Vector2(xy[0], xy[1]));
//            }

//            List<Vector2> convexPoints = new List<Vector2>();
//            Vector2 leftmost = points.Aggregate((p1, p2) => p1.x < p2.x ? p1 : p2);
//            Vector2 p = leftmost;
//            do
//            {
//                foreach(var q in points)
//                {
//                    if (p == q) continue;

//                    bool allCCW = true;
//                    foreach(var k in points)
//                    {
//                        if (k == q) continue;

//                        Vector2 qFromP = q - p;
//                        Vector2 kFromQ = k - q;
//                        long cross = qFromP.CrossProduct(kFromQ);
//                        if (cross < 0)
//                        {
//                            allCCW = false;
//                            break;
//                        }
//                    }
//                    if(allCCW)
//                    {
//                        convexPoints.Add(q);
//                        p = q;
//                    }
//                }
//            } while (p != leftmost);

//            convexPoints.Add(leftmost);
//            Console.WriteLine(convexPoints.Count);
//        }
//    }
//}
