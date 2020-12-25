#include <iostream>


int main()
{
    int n;
    std::cin >> n;

    bool isIncreasing = false;
    int starNum = 2*n - 1;
    for(int i = 0 ; i < 2*n - 1 ; i++)
    {
        for(int j = 0; j < 2*n - 1; j++)
        {
            int noStarNum = ((2*n - 1) - starNum) / 2;
            if(j < noStarNum)
                std::cout << ' ';
            else if(j >= noStarNum + starNum)
                break;
            else
            {
                std::cout << '*';
            }
            
        }
        std::cout << std::endl;
        
        isIncreasing ? (starNum += 2) : (starNum -= 2);
        if(starNum < 0) {
            starNum = 3;
            isIncreasing = true;
        }
    }


    std::cin.get();
    return 0;
}