#include <iostream>
#include <vector>

std::vector<int> solution(std::vector<int>& numbers) {
    std::vector<int> answer;

    int numArr[201];
    // initialize
    for (auto& n : numArr)
        n = -1;

    // addition
    for (int i = 0; i < numbers.size(); i++)
    {
        for (int j = i+1; j < numbers.size(); j++)
        {
            if (i == j) continue;
            int add = numbers[i] + numbers[j];
            numArr[add] = add;
        }
    }

    // making answer
    for (auto& n : numArr)
        if(n != -1)
            answer.push_back(n);

    return answer;
}

int main()
{
    int arr[] = { 2,1,3,4,1 };
    std::vector<int> numbers;
    for (auto& n : arr)
    {
        numbers.push_back(n);
    }

    std::vector<int> result = solution(numbers);
    
    for (auto& n : result)
    {
        std::cout << n << " ";
    }

    std::cout << std::endl;

	return 0;
}