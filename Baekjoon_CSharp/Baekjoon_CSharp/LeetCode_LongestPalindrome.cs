using System;
using System.Linq;
using System.Collections.Generic;
using System.Text;
using System.Text.RegularExpressions;

namespace Baekjoon_CSharp
{
    class LeetCode_LongestPalindrome
    {
        public static string LongestPalindrome(string s)
        {
            for(int i = s.Length; i > 0; i-- )
            {
                for(int j = 0; j+i <= s.Length; j++)
                {
                    string sub = s.Substring(j, i);

                    if (IsPalindrome(sub))
                        return sub;
                }
            }

            return null;
        }

        private static bool IsPalindrome(string s) => s == String.Join(String.Empty, Regex.Split(s, String.Empty).Reverse());

        static void Main()
        {
            string s = "civilwartestingwhetherthatnaptionoranynartionsoconceivedandsodedicatedcanlongendureWeareqmetonagreatbattlefiemldoftzhatwarWehavecometodedicpateaportionofthatfieldasafinalrestingplaceforthosewhoheregavetheirlivesthatthatnationmightliveItisaltogetherfangandproperthatweshoulddothisButinalargersensewecannotdedicatewecannotconsecratewecannothallowthisgroundThebravelmenlivinganddeadwhostruggledherehaveconsecrateditfaraboveourpoorponwertoaddordetractTgheworldadswfilllittlenotlenorlongrememberwhatwesayherebutitcanneverforgetwhattheydidhereItisforusthelivingrathertobededicatedheretotheulnfinishedworkwhichtheywhofoughtherehavethusfarsonoblyadvancedItisratherforustobeherededicatedtothegreattdafskremainingbeforeusthatfromthesehonoreddeadwetakeincreaseddevotiontothatcauseforwhichtheygavethelastpfullmeasureofdevotionthatweherehighlyresolvethatthesedeadshallnothavediedinvainthatthisnationunsderGodshallhaveanewbirthoffreedomandthatgovernmentofthepeoplebythepeopleforthepeopleshallnotperishfromtheearth";
            Console.WriteLine(LongestPalindrome(s));
        }
    }
}
