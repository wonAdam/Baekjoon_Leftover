//using System;
//using System.Collections.Generic;
//using System.Linq;

//namespace Baekjoon_CSharp
//{
//    class _1753_ShortestPath
//    {
//        public class Edge
//        {
//            public int from;
//            public int to;
//            public int cost;
//            public Edge(int[] input)
//            {
//                this.from = input[0]-1;
//                this.to = input[1]-1;
//                this.cost = input[2];
//            }
//        }


//        static void Main()
//        {
//            int[] ve = Console.ReadLine().Split(" ").Select(s => int.Parse(s)).ToArray();
//            int vertex = ve[0];
//            int edge = ve[1];

//            int start = int.Parse(Console.ReadLine());
//            start -= 1;

//            List<Edge> edges = new List<Edge>(); 
//            for(int i = 0; i < edge; i++)
//            {
//                int[] input = Console.ReadLine().Split(" ").Select(s => int.Parse(s)).ToArray();
//                Edge e = new Edge(input);
//                edges.Add(e);
//            }

//            int[] dist = new int[vertex]; 

//            bool[] sptSet = new bool[vertex];

//            for (int i = 0; i < vertex; i++)
//            {
//                dist[i] = int.MaxValue;
//                sptSet[i] = false;
//            }
//            dist[start] = 0;

//            for(int i = 0; i < vertex; i++)
//            {
//                int u = 0;
//                int min = int.MaxValue;
//                for(int j = 0; j < vertex; j++)
//                {
//                    if(min > dist[j] && !sptSet[j])
//                    {
//                        min = dist[j];
//                        u = j;
//                    }
//                }

//                sptSet[u] = true;

//                for(int v = 0; v < vertex; v++)
//                {
//                    if (!sptSet[v] && edges.Any(e => e.from == u && e.to == v) && dist[u] != int.MaxValue &&
//                        dist[u] + edges.Find(e => e.from == u && e.to == v).cost < dist[v])
//                        dist[v] = dist[u] + edges.Find(e => e.from == u && e.to == v).cost;
//                }
//            }



//            foreach(var d in dist)
//            {
//                string print = d == int.MaxValue ? "INF" : d.ToString();
//                Console.WriteLine(print);
//            }
//        }
//    }
//}
