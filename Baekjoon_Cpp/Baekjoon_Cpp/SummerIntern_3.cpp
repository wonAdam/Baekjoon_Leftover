//#include <string>
//#include <vector>
//#include <math.h>
//using namespace std;
//
//float distance(float x1, float y1, float x2, float y2)
//{
//    return sqrtf((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
//}
//
//int solution(vector<vector<int>> maps, int p, int r) {
//    int answer = 0;
//
//    for (int target_y = 0; target_y < maps.size(); target_y++)
//    {
//        for (int target_x = 0; target_x < maps[0].size(); target_x++)
//        {
//            vector<vector<float>> m;
//            for (int i = 0; i < maps.size(); i++)
//                m.push_back(vector<float>(maps[i].begin(), maps[i].end()));
//
//
//            int elimination_count = 0;
//            for (int y = 0; y < m.size(); y++)
//            {
//                for (int x = 0; x < m[0].size(); x++)
//                {
//                    float x_c = x + 0.5f;
//                    if (abs(x - target_x) <= (r / 2) && 
//                        abs(y - target_y) <= (r / 2) &&
//                        abs(x - target_x) + abs(y - target_y) <= (r / 2) + 1)
//                    {
//                        m[y][x] -= p / 2.0f;
//                        
//                        if (abs(x - target_x) < (r / 2) &&
//                            abs(y - target_y) < (r / 2) &&
//                            abs(x - target_x) + abs(y - target_y) <= (r / 2))
//                            m[y][x] -= p / 2.0f;
//
//                        if (m[y][x] <= 0)
//                            elimination_count++;
//                    }
//
//                }
//            }
//
//            if (elimination_count > answer) 
//                answer = elimination_count;
//        }
//    }
//
//    return answer;
//}
//
//int main()
//{
//    int r = solution({{ 1, 28, 41, 22, 25, 79, 4 },
//        { 39, 20, 10, 17, 19, 18, 8 },
//        { 21, 4, 13, 12, 9, 29, 19 },
//        { 58, 1, 20, 5, 8, 16, 9 },
//        { 5, 6, 15, 2, 39, 8, 29 },
//        { 39, 7, 17, 5, 4, 49, 5 },
//        { 74, 46, 8, 11, 25, 2, 11 }}, 19, 6);
//    return 0;
//}