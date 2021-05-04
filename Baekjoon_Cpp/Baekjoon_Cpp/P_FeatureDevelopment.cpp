//#include <vector>
//#include <queue>
//
//std::vector<int> solution(std::vector<int> progresses, std::vector<int> speeds) {
//
//    std::vector<int> answer;
//
//    std::queue<int> p_queue, s_queue; // progress queue & speed queue
//    for (int i = 0 ; i < progresses.size(); i++)
//    {
//        p_queue.push(progresses[i]);
//        s_queue.push(speeds[i]);
//    }
//
//    while (!p_queue.empty())
//    {
//
//        // doing job
//        int len = p_queue.size();
//        for (int i = 0; i < len; i++)
//        {
//            int p_curr = p_queue.front();
//            int s_curr = s_queue.front();
//
//            p_curr += s_curr;
//
//            s_queue.push(s_curr);
//            p_queue.push(p_curr);
//            p_queue.pop();
//            s_queue.pop();
//        }
//
//        int job_done_cnt = 0;
//        while (!p_queue.empty() && p_queue.front() >= 100)
//        {
//            p_queue.pop();
//            s_queue.pop();
//            job_done_cnt++;
//        }
//
//        if (job_done_cnt > 0)
//            answer.push_back(job_done_cnt);
//    }
//
//
//    return answer;
//}
//
//#include <iostream>
//int main()
//{
//    auto r = solution({ 93, 30, 55 }, { 1, 30, 5 });
//}