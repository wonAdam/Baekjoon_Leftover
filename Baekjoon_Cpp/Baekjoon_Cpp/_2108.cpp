#include <iostream>
#include <cmath>
#define ARRINDEX(a) a+4000

int main()
{
    // input n
    int n;
    std::cin >> n;

    // input integers
    int arr[8001] = {0};
    int* arr2 = new int[n];
    int sum = 0;
    for(int i = 0 ; i < n; i++)
    {
        int in;
        std::cin >> in;
        sum += in;
        arr[ARRINDEX(in)]++;
        arr2[i] = in;
    }
    qsort(arr2, n, sizeof(n), [](const void* a, const void* b){ return *(int*)a - *(int*)b;});

    //average
    int avg = std::round((float)sum / n);
    std::cout << avg << std::endl;

    // median
    int median;
    if(n%2 == 0)
        median = abs(avg - arr2[n/2]) < abs(avg - arr2[n/2 - 1]) ? arr2[n/2] : arr2[n/2 - 1];
    else
        median = arr2[n/2];
    
    std::cout << median << std::endl;

    // mode
    int secondMode;
    int count = 0;
    // first smallest
    for(int i = n-1 ; i >= 0 ; i--)
    {
        if(count <= arr[ARRINDEX(arr2[i])])
        {
            secondMode = arr2[i];
            count = arr[ARRINDEX(arr2[i])];
        }
    }
    // second smallest
    for(int i = 0 ; i < n ; i++)
    {
        if(count == arr[ARRINDEX(arr2[i])] && secondMode < arr2[i])
        {
            secondMode = arr2[i];
            break;
        }
    }
    std::cout << secondMode << std::endl;

    // range
    std::cout << (arr2[n-1] - arr2[0]) << std::endl;
    

    std::cin.get();
    std::cin.get();

    return 0;
}