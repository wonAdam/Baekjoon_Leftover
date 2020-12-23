using System;

namespace cs
{
    class Program
    {
        static void Main(string[] args)
        {
            int n;
            n = int.Parse(Console.ReadLine()); 

            int starNum = 2*n - 1;
            int noStarNum = 0;
            bool isIncreasing = false;
            for(int i = 0 ; i < 2*n - 1 ; i++)
            {
                for(int j = 0 ; j < starNum + noStarNum; j++)
                {
                    if(j < noStarNum)
                        Console.Write(' ');
                    else 
                        Console.Write('*');
                }
                Console.Write('\n');
                if(starNum == 1) isIncreasing = true;

                if(!isIncreasing){
                    noStarNum += 1;
                    starNum -= 2;
                }
                else{
                    noStarNum -= 1;
                    starNum += 2;
                }
            }

            Console.Read();
        }
    }
}
