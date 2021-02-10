//using System;
//using System.Linq;

//namespace Baekjoon_CSharp
//{
//    class LeetCode_MedianOfTwoSortedArrays
//    {
//        public static double FindMedianSortedArrays(int[] nums1, int[] nums2)
//        {
//            var list = nums1.Concat(nums2).ToList();
//            list.Sort();
//            return list.Count % 2 == 0 ? (list[list.Count / 2] + list[list.Count / 2 - 1]) / 2.0 : (double)list[list.Count / 2];
//        }
//        static void Main()
//        {
//            int[] nums1 = { 1, 3 };
//            int[] nums2 = { 2 };
//            Console.WriteLine(FindMedianSortedArrays(nums1, nums2));
//        }
//    }
//}
