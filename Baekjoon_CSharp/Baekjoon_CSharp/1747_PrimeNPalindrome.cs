using System;
using System.Linq;
using System.Text.RegularExpressions;

namespace Baekjoon_CSharp
{
    class _1747_PrimeNPalindrome
    {
        static void Main()
        {
            int n = int.Parse(Console.ReadLine());

            while(true)
            {
                int palindrome = int.Parse(String.Join("", Regex.Split(n.ToString(), String.Empty).Reverse()));

                bool isPalindrome = false;
                bool isPrime = false;
                if (palindrome == n)
                {
                    isPalindrome = true;
                    isPrime = true;
                    for(int i = 2; i < n; i++)
                        if(n % i == 0)
                        {
                            isPrime = false;
                            break;
                        }
                    if (n == 1) isPrime = false;
                }

                if(isPalindrome && isPrime)
                {
                    Console.WriteLine(n);
                    return;
                }

                n++;
            }
        }

    }
}
