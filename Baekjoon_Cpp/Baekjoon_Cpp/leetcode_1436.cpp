//// https://leetcode.com/problems/destination-city/
//#include <vector>
//#include <string>
//#include <map>
//using namespace std;
//
//
//class Solution {
//public:
//    string destCity(vector<vector<string>>& paths) {
//        // [0]에 나오면 &= false, [1]에 나오면 &= true
//        // 마지막에 true인 city가 destination
//        // 마지막에 true이면 [1]에만 나온 city임.
//        map<string, bool> map;
//
//        for (const auto& path : paths)
//        {
//            if (map.find(path[0]) == map.end())
//            {
//                map.emplace(path[0], false);
//            }
//            else
//            {
//                map[path[0]] &= false;
//            }
//            if (map.find(path[1]) == map.end())
//            {
//                map.emplace(path[1], true);
//            }
//        }
//
//        string destination;
//        for (const auto& cityPair : map)
//        {
//            if (cityPair.second == true)
//            {
//                destination = cityPair.first;
//                break;
//            }
//        }
//
//        return destination;
//    }
//};
//
//int main()
//{
//    vector<vector<string>> paths;
//    paths.push_back({ "B","C" });
//    paths.push_back({ "D","B" });
//    paths.push_back({ "C","A" });
//
//    string result = Solution().destCity(paths);
//    return 0;
//}