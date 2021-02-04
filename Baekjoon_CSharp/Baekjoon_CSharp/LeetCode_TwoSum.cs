//using System;
//using System.Collections.Generic;
//using System.Linq;
//using System.Text;

//namespace Baekjoon_CSharp
//{
//    class LeetCode_TwoSum
//    {
//        public int[] TwoSum(int[] nums, int target)
//        {
//            int[] result = new int[2];
//            foreach(var (first, i) in nums.Select((n, i) => (n, i)))
//            {
//                foreach (var (second, j) in nums.Select((m, j) => (m, j)))
//                {
//                    if(i != j && first + second == target)
//                    {
//                        result[0] = i;
//                        result[1] = j;
//                    }
//                }
//            }

//            return result;
//        }

//        static void Main()
//        {

//        }

//    }
//}
