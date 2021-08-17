//#include <vector>
//#include <set>
//#include <algorithm>
//
//using namespace std;
//
//vector<int> solution(vector<int> fruitWeights, int k) {
//    vector<int> answer;
//
//    set<int, std::greater<int>> answerSet;
//    for (int i = 0; i <= fruitWeights.size() - k; ++i)
//    {
//        int max = 0;
//        for (int j = 0; j < k; ++j)
//        {
//            if (fruitWeights[i + j] > max)
//                max = fruitWeights[i + j];
//        }
//
//        answerSet.insert(max);
//    }
//    answer.resize(answerSet.size());
//
//    copy(answerSet.begin(), answerSet.end(), answer.begin());
//
//    return answer;
//}
//
//int main()
//{
//    solution({ 30, 40, 10, 20, 30 }, 3);
//
//    return 0;
//}