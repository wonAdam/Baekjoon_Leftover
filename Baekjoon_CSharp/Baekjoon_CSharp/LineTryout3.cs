//using System;
//using System.Collections.Generic;
//using System.Linq;
//using System.Text;

//namespace Baekjoon_CSharp
//{
//    class LineTryout3
//    {
//        public class Oven
//        {
//            public string food;
//            public int tiks;
//            public bool isLastOrder;

//            public Oven()
//            {
//                food = "";
//                tiks = 0;
//                isLastOrder = false;
//            }
//        }
//        public static int solution(int n, string[] recipes, string[] orders)
//        {
//            List<Oven> ovens = new List<Oven>();
//            for (int i = 0; i < n; i++) ovens.Add(new Oven());

//            Dictionary<string, int> recipesDictionary = new Dictionary<string, int>();
//            foreach(var r in recipes)
//            {
//                string[] fNt = r.Split(" ");
//                recipesDictionary.Add(fNt[0], int.Parse(fNt[1]));
//            }

//            Queue<(string food, int tik)> orderQueue = new Queue<(string food, int tik)>();
//            foreach(var o in orders)
//            {
//                string[] oNt = o.Split(" ");
//                orderQueue.Enqueue((oNt[0], int.Parse(oNt[1])));
//            }

//            int currTime = 0;
//            while(orderQueue.Count > 0 || ovens.Any((o) => o.food != ""))
//            {
//                currTime++;

//                // oven tik
//                foreach(var o in ovens)
//                {
//                    if (o.food != "") o.tiks++; // cooking
//                    if (o.food != "" && o.tiks >= recipesDictionary[o.food]) // food ready
//                    {
//                        o.food = "";
//                        o.tiks = 0;

//                        if (o.isLastOrder) return currTime;
//                    }
//                }


//                // orderQueue Check
//                while(true)
//                {
//                    if (orderQueue.Count > 0 && orderQueue.Peek().tik <= currTime && ovens.Any(o => o.food == ""))
//                    {
//                        var order = orderQueue.Dequeue();
//                        Oven oven = ovens.Find(o => o.food == "");
//                        oven.food = order.food;
//                        oven.tiks = 0;
//                        if (orderQueue.Count == 0) oven.isLastOrder = true;
//                    }
//                    else break;
//                }


//            }



//            return currTime;
//        }

//        static void Main(string[] args)
//        {
//            string[] recipes = { "COOKIE 10000" }; 
//            string[] orders = { "COOKIE 300000" };
//            int result = solution(1, recipes, orders);
//            Console.WriteLine(result);
//        }

//    }
//}
