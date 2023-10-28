//using System;
//using System.Collections.Generic;
//using System.Text;
//using System.Text.Encodings.Web;

//namespace Baekjoon_CSharp
//{
//    internal class _5597_SomeoneDidntSubmitAssignment
//    {
//        static void Main(string[] args)
//        {
//            SortedSet<int> numbers = new SortedSet<int>();
//            for (int i = 1; i <= 30; i++)
//                numbers.Add(i);

//            for (int i = 1; i <= 28; i++)
//            {
//                int input = int.Parse(Console.ReadLine());
//                numbers.Remove(input);
//            }

//            foreach (int number in numbers)
//                Console.WriteLine(number);
//        }
//    }
//}
