#include <iostream>
#include <map>

int main()
{
    uint8_t ageArr[100000] = {0};
    std::string nameArr[100000];
    uint16_t idxArr[100000];

    int n;
    std::cin >> n;
    // input
    for(int i = 0; i < n; i++)
    {
        std::cin >> ageArr[i] >> nameArr[i];
        idxArr[i] = i;
    }

    // sort
    for(int i = 0 ; i < n; i++)
    {

        int minAge = 201;
        int minIdx;
        for(int j = i+1; j < n; j++)
        {
            if(ageArr[idxArr[j]] < minAge)
            {
                minAge = ageArr[idxArr[j]];
                minIdx = idxArr[j];
            }
        }
        // minIdx <-> i
        int idxTemp = idxArr[minIdx];
        idxArr[minIdx] = idxArr[i];
        idxArr[i] = idxTemp;

    }


    std::cin.get();

    return 0;
}