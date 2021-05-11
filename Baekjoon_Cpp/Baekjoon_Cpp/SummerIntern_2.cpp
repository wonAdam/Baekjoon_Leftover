//#include <string>
//#include <vector>
//#include <list>
//
//using namespace std;
//
//struct Waiting
//{
//    int index;
//    int rank;
//    Waiting(int i, int p) : index(i), rank(p) {}
//};
//vector<int> solution(vector<int> t, vector<int> r) {
//    vector<int> answer;
//
//    list<Waiting> waitingList;
//
//    int time = -1;
//    while (answer.size() < t.size())
//    {
//        // 도착한 손님 세팅
//        time++;
//        for (int i = 0; i < t.size(); i++)
//        {
//            if (t[i] == time)
//                waitingList.push_back(Waiting(i, r[i]));
//        }
//
//        // 현재 도착한 손님중 가장 우선순위가 높은 사람
//        std::list<Waiting>::iterator entry;
//        std::list<Waiting>::iterator pick;
//        bool picked = false;
//        for (entry = waitingList.begin(); entry != waitingList.end(); entry++)
//        {
//            if (picked == false || entry->rank < pick->rank)
//            {
//                pick = entry;
//                picked = true;
//            }
//        }
//
//        // 리프트 보내기
//        if (picked)
//        {
//            answer.push_back(pick->index);
//            waitingList.erase(pick);
//        }
//    }
//
//    return answer;
//}
//
//int main()
//{
//    solution({ 0,1,3,0 }, { 0,1,2,3 });
//    return 0;
//}