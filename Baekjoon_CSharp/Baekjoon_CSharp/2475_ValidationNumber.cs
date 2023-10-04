using System;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using System.Text;

namespace Baekjoon_CSharp
{
    internal class _2475_ValidationNumber
    {
        static void Main(string[] args)
        {
            string input = Console.ReadLine();
            string[] inputArr = input.Split(' ');

            int accum = 0;
            foreach(var inputElem in inputArr) 
            { 
                int inputElemInt = int.Parse(inputElem);
                int pow = inputElemInt * inputElemInt;
                accum += pow; 
            }

            Console.WriteLine(accum % 10);
        }
    }
}
