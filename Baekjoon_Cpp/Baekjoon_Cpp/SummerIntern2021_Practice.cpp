//#include <iostream>
//#include <vector>
//using namespace std;
//
//vector<int> solution(vector<vector<int>> v) 
//{
//    vector<int> ans;
//
//    for (int i = 0 ; i < v.size(); i++)
//    {
//        for (int j = 0; j < v.size(); j++)
//        {
//            if (i == j) continue;
//
//            if (v[j][0] == v[i][0]) {
//                v[j][0] = 0;
//                v[i][0] = 0;
//            }
//            if (v[j][1] == v[i][1]) {
//                v[j][1] = 0;
//                v[i][1] = 0;
//            }
//        }
//    }
//
//    int x, y;
//    for (int i = 0; i < v.size(); i++)
//    {
//        if (v[i][0] != 0) x = v[i][0];
//        if (v[i][1] != 0) y = v[i][1];
//    }
//
//    ans.push_back(x);
//    ans.push_back(y);
//    return ans;
//}
//
//int main()
//{
//    solution({{1, 4 }, { 3, 4 }, { 3, 10 }});
//    return 0;
//}