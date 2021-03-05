//using System;
//using System.Linq;

//namespace Baekjoon_CSharp
//{
//    class _11758_CCW
//    {
//        struct Vector
//        {
//            public double x, y, z;
//            public Vector(double[] points)
//            {
//                x = points[0];
//                y = points[1];

//                if (points.Length > 2)
//                    z = points[2];
//                else
//                    z = 0;
//            }
//            public double Magnitude() => Math.Sqrt(Math.Pow(x, 2) + Math.Pow(y, 2) + Math.Pow(z, 2));
//            public static Vector operator- (Vector v1, Vector v2) => new Vector { x = v1.x - v2.x, y = v1.y - v2.y, z = v1.z - v2.z };
//            public static Vector Cross(Vector v1, Vector v2) 
//                => new Vector { x = v1.y * v2.z - v1.z * v2.y, y = -(v1.x * v2.z - v1.z * v2.x), z = v1.x * v2.y - v1.y * v2.x };
//        }
//        static void Main()
//        {
//            Vector v1 = new Vector(Console.ReadLine().Split(" ").Select(e => double.Parse(e)).ToArray());
//            Vector v2 = new Vector(Console.ReadLine().Split(" ").Select(e => double.Parse(e)).ToArray());
//            Vector v3 = new Vector(Console.ReadLine().Split(" ").Select(e => double.Parse(e)).ToArray());

//            Vector s1 = v2 - v1;
//            Vector s2 = v3 - v2;

//            Vector cross = Vector.Cross(s1, s2);

//            double mag = cross.z;
//            if (mag == 0)
//                Console.WriteLine(0);
//            else if(mag < 0)
//                Console.WriteLine(-1);
//            else
//                Console.WriteLine(1);

//        }
//    }
//}
