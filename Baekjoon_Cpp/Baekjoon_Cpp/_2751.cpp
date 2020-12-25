#include <iostream>
int compar(const void* a, const void* b){
    return *(int*)a - *(int*)b;
}
int main()
{
    int n;
    std::cin >>n;
    int* arr = new int[n];
    for(int i = 0 ; i < n; i++)
    {
        std::cin >> arr[i];
    }

    qsort(arr, n, sizeof(int), compar);

    for(int i = 0 ; i < n; i++)
    {
        std::cout << arr[i] << std::endl;
    }

    std::cin.get();
    return 0;
}