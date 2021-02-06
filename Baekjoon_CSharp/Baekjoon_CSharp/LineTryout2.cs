//using System;
//using System.Collections.Generic;
//using System.Linq;
//using System.Text;

//namespace Baekjoon_CSharp
//{
//    class LineTryout2
//    {
//        public static int[] GetRow(int[,] matrix, int rowNumber)
//        {
//            return Enumerable.Range(0, matrix.GetLength(1))
//                    .Select(x => matrix[rowNumber, x])
//                    .ToArray();
//        }
//        public static string[] solution(int[,] line)
//        {
//            List<(int x, int y)> intPoints = new List<(int, int)>();

//            for(int i = 0; i < line.GetLength(0); i++)
//            {
//                for(int j = 0; j < line.GetLength(0); j++)
//                {
//                    if(i != j)
//                    {
//                        float x = SolveX(GetRow(line, i), GetRow(line, j));
//                        float y = SolveY(GetRow(line, i), GetRow(line, j));

//                        if (IsInteger(x) && IsInteger(y))
//                            intPoints.Add(((int)x, (int)y));
//                    }
//                }
//            }
//            int maxX = intPoints.Max((p) => p.x);
//            int minX = intPoints.Min((p) => p.x);
//            int maxY = intPoints.Max((p) => p.y);
//            int minY = intPoints.Min((p) => p.y);

//            List<List<char>> graph = 
//                Enumerable.Repeat(new List<char>(), Math.Abs(maxY - minY) + 1).ToList();
//            for (int i  = 0; i < graph.Count; i++)
//                graph[i] = Enumerable.Repeat('.', Math.Abs(maxX - minX) + 1).ToList();

//            foreach (var p in intPoints)
//            {
//                int graphX = p.x - minX;
//                int graphY = maxY - p.y;
//                graph[graphY][graphX] = '*';
//            }


//            List<string> graphListStr = new List<string>();
//            foreach(var cList in graph)
//            {
//                graphListStr.Add(new string(cList.ToArray()));
//            }
//            string[] answer = new string[graphListStr.Count];
//            for (int i = 0; i < graphListStr.Count; i++)
//            {
//                answer[i] = graphListStr[i];
//            }

//            return answer;
//        }

//        public static float SolveX(int[] first, int[] second)
//        {
//            float firstX;
//            float firstC;
//            if (first[1] == 0)
//            {
//                return -first[2] / (float)first[0];
//            }
//            else if (second[1] == 0)
//            {
//                return -second[2] / (float)second[0];
//            }
//            firstX = first[0] / (float)first[1];
//            firstC = first[2] / (float)first[1];

//            float subToSecondX = second[1] * (-firstX);
//            float subToSecondC = second[1] * (-firstC);

//            float finalSecondX = subToSecondX + second[0];
//            float finalSecondC = subToSecondC + second[2];

//            return (-finalSecondC) / finalSecondX;

//        }

//        public static float SolveY(int[] first, int[] second)
//        {
//            float firstY;
//            float firstC;
//            if (first[0] == 0)
//            {
//                return -first[2] / (float)first[1];
//            }
//            else if(second[0] == 0)
//            {
//                return -second[2] / (float)second[1];
//            }

//            firstY = first[1] / (float)first[0];
//            firstC = first[2] / (float)first[0];

//            float subToSecondY = second[0] * (-firstY);
//            float subToSecondC = second[0] * (-firstC);

//            float finalSecondY = subToSecondY + second[1];
//            float finalSecondC = subToSecondC + second[2];

//            return (-finalSecondC) / finalSecondY;

//        }

//        public static bool IsInteger(float f) =>(int)MathF.Ceiling(f) == f;

//        static void Main(string[] args)
//        {
//            int[,] line = { { 0, 1, -1 }, {1, 0, -1}, {1, 0, 1 } };
//            string[] graph = solution(line);

//            foreach(var s in graph)
//                Console.WriteLine(s);

//        }

//    }
//}
