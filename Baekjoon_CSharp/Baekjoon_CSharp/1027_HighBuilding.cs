//using System;
//using System.Collections.Generic;
//using System.Linq;
//using System.Text.RegularExpressions;

//namespace Baekjoon_CSharp
//{
//    struct Vector3
//    {
//        public Int64 _x, _y, _z;
//        public Vector3(Int64 x, Int64 y, Int64 z)
//        {
//            _x = x; _y = y; _z = z;
//        }

//        public Vector3 CrossProduct(Vector3 v)
//        {
//            Vector3 result;
//            result._x = _y * v._z - v._y * _z;
//            result._y = -(_x * v._z - v._x * _z);
//            result._z = _x * v._y - v._x * _y;
//            return result;
//        }

//        public static Vector3 operator-(Vector3 lhs, Vector3 rhs) 
//            => new Vector3(lhs._x - rhs._x, lhs._y - rhs._y, lhs._z - rhs._z);
//    }
//    class _1027_HighBuilding
//    {

//        static void Main()
//        {
//            int n = int.Parse(Console.ReadLine());
//            string[] input = Regex.Split(Console.ReadLine(), " ");
//            List<int> buildings = input.Select(s => int.Parse(s)).ToList();
//            List<Vector3> buildingsPos = buildings.Select((height, i) => new Vector3(i, height, 0)).ToList();

//            List<int> visibleCount = new List<int>();
//            for (int i = 0; i < buildingsPos.Count; i++)
//            {
//                //left
//                int leftCount = 0;
//                if (i > 0)
//                {
//                    Vector3 highest = buildingsPos[i-1];
//                    leftCount++;
//                    for (int j = i - 2; j >= 0; j--)
//                    {
//                        Vector3 curToHeightest = highest - buildingsPos[i];
//                        Vector3 heightToTarget = buildingsPos[j] - highest;
//                        // clockwise => z negative => visible
//                        if (curToHeightest.CrossProduct(heightToTarget)._z < 0)
//                        {
//                            highest = buildingsPos[j];
//                            leftCount++;
//                        }

//                        // counterclockwise => z positive => invisible
//                        // do nothing
//                    }
//                }

                

//                //right
//                int rightCount = 0;
//                if(i + 1 < buildingsPos.Count)
//                {
//                    Vector3 highest = buildingsPos[i + 1];
//                    rightCount++;
//                    for (int j = i + 2; j < buildingsPos.Count; j++)
//                    {
//                        Vector3 curToHeightest = highest - buildingsPos[i];
//                        Vector3 heightToTarget = buildingsPos[j] - highest;

//                        // counterclockwise => z positive => visible
//                        if (curToHeightest.CrossProduct(heightToTarget)._z > 0)
//                        {
//                            highest = buildingsPos[j];
//                            rightCount++;
//                        }

//                        // clockwise => z negative => invisible
//                        // do nothing
//                    }
//                }

//                visibleCount.Add(rightCount + leftCount);
//            }

//            Console.WriteLine(visibleCount.Max());
//        }
//    }
//}
