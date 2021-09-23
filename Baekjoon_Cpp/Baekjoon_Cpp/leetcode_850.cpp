//// https://leetcode.com/problems/rectangle-area-ii/
//#include <vector>
//
//using namespace std;
//
//
//class Solution {
//public:
//    bool doOverlap(int r1minX, int r1minY, int r1maxX, int r1maxY, int r2minX, int r2minY, int r2maxX, int r2maxY)
//    {
//        if (r1minX >= r2maxX)
//            return false;
//
//        if (r1maxY <= r2minY)
//            return false;
//
//        if (r1maxX <= r1minX)
//            return false;
//
//        if (r1minY >= r2maxY)
//            return false;
//
//        return true;
//    }
//
//    int rectangleArea(vector<vector<int>>& rectangles) {
//        vector<int> areaOfRectangles;
//        areaOfRectangles.reserve(rectangles.size());
//
//        for (const auto& rect : rectangles)
//        {
//            int width = abs(rect[0] - rect[2]);
//            int height = abs(rect[1] - rect[3]);
//            int area = width * height;
//            areaOfRectangles.push_back(area);
//        }
//
//        for (int i = 0; i < rectangles.size(); ++i)
//        {
//            for (int j = i + 1; j < rectangles.size(); ++j)
//            {
//                // overlap rect area
//                if (doOverlap(rectangles[i][0], rectangles[i][1], rectangles[i][2], rectangles[i][3],
//                    rectangles[j][0], rectangles[j][1], rectangles[j][2], rectangles[j][3]))
//                {
//                    int minX = max(rectangles[i][0], rectangles[j][0]);
//                    int minY = max(rectangles[i][1], rectangles[j][1]);
//                    int maxX = min(rectangles[i][2], rectangles[j][2]);
//                    int maxY = min(rectangles[i][3], rectangles[j][3]);
//
//                    int width = abs(minX - maxX);
//                    int height = abs(minY - maxY);
//                    int area = width * height;
//                    rectangles[]
//                }
//
//            }
//        }
//
//    }
//};
//
//
//
//int main()
//{
//
//}