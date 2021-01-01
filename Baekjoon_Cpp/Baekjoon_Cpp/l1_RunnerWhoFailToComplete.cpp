//#include <iostream>
//#include <vector>
//#include <string>
//#include <set>
//
//std::string solution(std::vector<std::string> participant, std::vector<std::string> completion) {
//    std::multiset<std::string> set;
//
//    for (auto& p :participant)
//    {
//        set.insert(p);
//    }
//    for (auto& c : completion)
//    {
//        set.erase(set.find(c));
//    }
//    std::string answer = *set.begin();
//    return answer;
//}
//
//
//
//
//int main()
//{
//    std::vector<std::string> participant = { "mislav", "stanko", "mislav", "ana" };
//    std::vector<std::string> completion = { "stanko", "ana", "mislav" };
//    std::string failRunner = solution(participant, completion);
//    std::cout << failRunner << std::endl;
//    std::cin.get();
//
//    return 0;
//}