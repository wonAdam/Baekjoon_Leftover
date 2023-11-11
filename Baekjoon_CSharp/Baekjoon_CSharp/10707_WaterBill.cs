//using System;
//using System.Collections.Generic;
//using System.Text;

//namespace Baekjoon_CSharp
//{
//    internal class _10707_WaterBill
//    {
//        static void Main(string[] args)
//        {
//            int x_costPerL = int.Parse(Console.ReadLine());
//            int y_baseCost = int.Parse(Console.ReadLine());
//            int y_cutline = int.Parse(Console.ReadLine());
//            int y_costPerL = int.Parse(Console.ReadLine());
//            int usage = int.Parse(Console.ReadLine());

//            int x_cost = usage * x_costPerL;
//            int y_cost = y_baseCost + (Math.Max(0, usage - y_cutline) * y_costPerL);

//            Console.WriteLine(Math.Min(x_cost, y_cost));
//        }
//    }
//}
