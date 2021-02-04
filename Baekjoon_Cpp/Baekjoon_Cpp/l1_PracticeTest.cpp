//#include <iostream>
//#include <algorithm>
//#include <vector>
//
//std::vector<int> solution(std::vector<int> answers) {
//    std::vector<int> answer;
//    std::vector<int> pattern1 = { 1,2,3,4,5 };
//    std::vector<int> pattern2 = { 2,1,2,3,2,4,2,5 };
//    std::vector<int> pattern3 = { 3,3,1,1,2,2,4,4,5,5 };
//
//    std::vector<int> counts = { 0,0,0 };
//    for (int i = 0 ; i < answers.size(); i++)
//    {
//        if (answers[i] == pattern1[i % pattern1.size()])
//            counts[0]++;
//        if (answers[i] == pattern2[i % pattern2.size()])
//            counts[1]++;
//        if (answers[i] == pattern3[i % pattern3.size()])
//            counts[2]++;
//    }
//
//    int max = *std::max_element(counts.begin(), counts.end());
//
//    for (int i = 0; i < 3; i++)
//        if (max == counts[i]) answer.push_back(i+1);
//
//    return answer;
//}
//
//
//
//
//int main()
//{
//    std::vector<int> answers = { 1, 3, 2, 4, 2 };
//    std::vector<int> answer = solution(answers);
//
//
//	return 0;
//}

#include <vector>
#include <iostream>

int main()
{
	std::vector<int> v = std::vector<int>(5, 3);

	for (std::vector<int>::const_iterator iter = v.begin(); iter != v.end(); iter++)
		std::cout << *iter << std::endl;
}