using System;

namespace cs
{
    class Program
    {
        static void Main(string[] args)
        {
            // input
            int input = int.Parse(Console.ReadLine());

            // if input less than 10
            if(input < 10){
                input *= 10;
            }

            //process
            int count = 0;
            int num = input;
            while(true)
            {
                count++;

                int newFirstDigit = ((num / 10) + (num % 10)) % 10;
                int newSecondDigit = num % 10;

                int newNum= newSecondDigit * 10 + newFirstDigit;

                if(newNum == input)
                    break;
                else
                    num = newNum;
            }

            // print result
            Console.WriteLine(count);
            

            Console.Read();
            return;
        }
    }
}
