//// https://leetcode.com/problems/implement-queue-using-stacks/
//
//#include <stack>
//
//using namespace std;
//
//class MyQueue {
//public:
//    MyQueue() {
//    }
//
//    void push(int x) {
//        s_real.push(x);
//    }
//
//    int pop() {
//        // put element in reverse into temp
//        while (!s_real.empty())
//        {
//            int top = s_real.top();
//            s_temp.push(top);
//            s_real.pop();
//        }
//
//        int result = s_temp.top();
//        s_temp.pop();
//
//        // restore
//        while (!s_temp.empty())
//        {
//            int top = s_temp.top();
//            s_real.push(top);
//            s_temp.pop();
//        }
//
//        return result;
//    }
//
//    int peek() {
//        // put element in reverse into temp
//        while (!s_real.empty())
//        {
//            int top = s_real.top();
//            s_temp.push(top);
//            s_real.pop();
//        }
//
//        int result = s_temp.top();
//
//        // restore
//        while (!s_temp.empty())
//        {
//            int top = s_temp.top();
//            s_real.push(top);
//            s_temp.pop();
//        }
//
//        return result;
//    }
//
//    bool empty() {
//        return s_real.empty();
//    }
//
//private:
//    stack<int> s_real;
//    stack<int> s_temp;
//};
