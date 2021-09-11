//#include <vector>
//#include <iostream>
//using namespace std;
//
//int solution(vector<int> win_lose)
//{
//    int answer = 0;
//
//    bool winInARow = false;
//    int count = 0;
//    for (const auto& result : win_lose)
//    {
//        if (!winInARow && result == 1) // 铰府狼 矫累
//        {
//            winInARow = true;
//            count = 1;
//        }
//        else if (winInARow && result == 1) // 楷加 铰府
//        {
//            ++count;
//        }
//        else if (winInARow && result == 0) // 楷加 铰府 场
//        {
//            if (count > answer)
//                answer = count;
//
//            winInARow = false;
//            count = 0;
//        }
//    }
//
//    if (count > answer) // 楷加 铰府肺 场车阑 版快
//        answer = count;
//
//    return answer;
//}

//int main()
//{
//    std::cout << solution({ 1, 1, 1, 0, 1, 1, 1, 1, 1 }) << std::endl;
//
//    return  0;
//}