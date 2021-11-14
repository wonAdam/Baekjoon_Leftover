//// https://leetcode.com/problems/reformat-date/
//
//#include <string>
//#include <sstream>
//#include <vector>
//
//using namespace std;
//
//class Solution {
//private:
//    vector<string> monthStrs = { "Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec" };
//
//public:
//    string reformatDate(string date) {
//        stringstream inputss(date);
//        string del;
//        vector<string> inputs;
//        while (getline(inputss, del, ' ')) {
//            inputs.push_back(del);
//        }
//
//        string day;
//        if (inputs[0].size() == 4)
//        {
//            day = inputs[0].substr(0, 2);
//        }
//        else
//        {
//            day = "0";
//            day.append(inputs[0].substr(0, 1));
//        }
//
//        string month;
//        for (int i = 0 ; i < monthStrs.size(); ++i)
//        {
//            if (monthStrs[i] == inputs[1])
//            {
//                int monthInt = i + 1;
//
//                month = monthInt > 9 ? to_string(monthInt) : "0" + to_string(monthInt);
//
//                break;
//            }
//        }
//
//        int year = atoi(inputs[2].substr(0, 4).c_str());;
//
//        stringstream result;
//        result << year << '-' << month << '-' << day;
//
//        return result.str();
//    }
//};
//
//int main()
//{
//    string result = Solution().reformatDate("6th Jun 1933");
//    return 0;
//}