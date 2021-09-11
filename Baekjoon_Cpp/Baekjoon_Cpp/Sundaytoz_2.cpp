//#include <iostream>
//
//#include <vector>
//#include <map>
//using namespace std;
//
//vector<int> solution(vector<int> people) {
//    vector<int> answer;
//
//    map<int, int> coupon_book;
//
//    for (const int& order : people)
//    {
//        if (coupon_book.find(order) == coupon_book.end()) // order손님의 첫 주문
//        {
//            coupon_book.insert(make_pair(order, 1));
//        }
//        else // 주문했던 손님임.
//        {
//            if (coupon_book[order] == 3) // 쿠폰 세개를 모은 손님
//            {
//                answer.push_back(order);
//                coupon_book.find(order)->second = 0;
//
//            }
//            else
//            {
//                coupon_book.find(order)->second++;
//            }
//        }
//    }
//
//    if (answer.size() == 0)
//        answer.push_back(-1);
//
//    return answer;
//}
//
//int main()
//{
//    vector<int> answer = solution({ 1, 1, 3, 3, 3, 3, 1, 3, 3, 3, 3, 2 });
//
//    for(const int& ele : answer)
//        std::cout << ele << " ";
//
//    return  0;
//}