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
//        if (!winInARow && result == 1) // �¸��� ����
//        {
//            winInARow = true;
//            count = 1;
//        }
//        else if (winInARow && result == 1) // ���� �¸�
//        {
//            ++count;
//        }
//        else if (winInARow && result == 0) // ���� �¸� ��
//        {
//            if (count > answer)
//                answer = count;
//
//            winInARow = false;
//            count = 0;
//        }
//    }
//
//    if (count > answer) // ���� �¸��� ������ ���
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