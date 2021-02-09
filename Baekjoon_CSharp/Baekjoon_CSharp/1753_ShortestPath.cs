//using System;
//using System.Linq;

//namespace Baekjoon_CSharp
//{
//    class _1753_ShortestPath
//    {
//        static void Main()
//        {
//            int[] ve = Console.ReadLine().Split(" ").Select(s => int.Parse(s)).ToArray();
//            int vertex = ve[0];
//            int edge = ve[1];

//            int start = int.Parse(Console.ReadLine());
//            start -= 1;

//            byte[,] graph = new byte[vertex, vertex];
//            for (int i = 0; i < edge; i++)
//            {
//                int[] input = Console.ReadLine().Split(" ").Select(s => int.Parse(s)).ToArray();
//                graph[input[0] - 1, input[1] - 1] = (byte)input[2];
//            }

//            int[] dist = new int[vertex];

//            bool[] sptSet = new bool[vertex];
//            for (int i = 0; i < vertex; i++)
//            {
//                dist[i] = int.MaxValue;
//                sptSet[i] = false;
//            }
//            dist[start] = 0;

//            for (int i = 0; i < vertex; i++)
//            {
//                int u = Array.IndexOf(dist, dist.Where((d, i) => !sptSet[i]).Min());

//                sptSet[u] = true;

//                foreach (var item in Enumerable.Range(0, vertex).Select(x => new { to = x, cost = graph[u, x] }).Where(c => c.cost > 0))
//                {
//                    if (!sptSet[item.to] && dist[u] != int.MaxValue &&
//                        dist[u] + item.cost < dist[item.to])
//                        dist[item.to] = dist[u] + item.cost;
//                }
//            }



//            foreach (var d in dist)
//            {
//                string print = d == int.MaxValue ? "INF" : d.ToString();
//                Console.WriteLine(print);
//            }
//        }
//    }
//}
