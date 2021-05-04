//#include <vector>
//#include <queue>
//
//struct Entry
//{
//    unsigned int x, y, d;
//    Entry(unsigned int x, unsigned int y, unsigned int distance) : x(x), y(y), d(distance) {}
//};
//int solution(std::vector<std::vector<int>> maps)
//{
//    int x_max = maps[0].size() - 1;
//    int y_max = maps.size() - 1;
//
//    std::queue<Entry> q;
//    // 초기 상태
//    q.push(Entry(0, 0, 1));
//
//    // BFS
//    while (!q.empty())
//    {
//        Entry curr = q.front();
//        q.pop();
//
//        if (curr.x == x_max && curr.y == y_max)
//            return curr.d;
//
//        // north
//        if (curr.y > 0 && maps[curr.y - 1][curr.x] == 1)
//        {
//            q.push(Entry(curr.x, curr.y - 1, curr.d + 1));
//            maps[curr.y - 1][curr.x] = -1;
//        }
//
//        // south
//        if (curr.y < y_max && maps[curr.y + 1][curr.x] == 1) 
//        {
//            q.push(Entry(curr.x, curr.y + 1, curr.d + 1));
//            maps[curr.y + 1][curr.x] = -1;
//        }
//        
//        // east
//        if (curr.x < x_max && maps[curr.y][curr.x + 1] == 1)
//        {
//            q.push(Entry(curr.x + 1, curr.y, curr.d + 1));
//            maps[curr.y][curr.x + 1] = -1;
//        }
//
//        // west
//        if (curr.x > 0 && maps[curr.y][curr.x - 1] == 1)
//        {
//            q.push(Entry(curr.x - 1, curr.y, curr.d + 1));
//            maps[curr.y][curr.x - 1] = -1;
//        }
//
//    }
//
//    return -1;
//}
//
//#include <iostream>
//int main()
//{
//    std::cout << solution({ {1, 0, 1, 1, 1},{1, 0, 1, 0, 1},{1, 0, 1, 1, 1},{1, 1, 1, 0, 1},{0, 0, 0, 0, 1} }) << std::endl;
//}