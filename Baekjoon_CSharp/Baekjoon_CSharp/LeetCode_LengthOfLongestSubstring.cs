//using System;
//using System.Collections.Generic;
//using System.Linq;
//using System.Text;

//namespace Baekjoon_CSharp
//{
//    class LeetCode_LengthOfLongestSubstring
//    {
//        public int LengthOfLongestSubstring(string s)
//        {
//            List<string> substrings = new List<string>();

//            string currStr = "";
//            for(int i = 0; i < s.Length; )
//            {
//                foreach(var c in s.Substring(i))
//                {
//                    if (currStr.Contains(c)) break;

//                    currStr += c;
//                }
//                substrings.Add(currStr);
//                currStr = "";
//                i++;
//            }
//            substrings.Add(currStr);

//            return substrings.Aggregate((acc, s) => acc.Length > s.Length ? acc : s).Length;
//        }
//    }
//}
