// https://leetcode.com/problems/reverse-bits/
//#include <cstdint>
//#include <bitset>
//#include <sstream>
//
//using namespace std;
//
//class Solution {
//public:
//    uint32_t reverseBits(uint32_t n) {
//        bitset<32> b(n);
//
//        string bit_string = b.to_string();
//        stringstream ss;
//        for (int i = bit_string.size() - 1; i >= 0; --i)
//            ss << bit_string[i];
//
//        bitset<32> result(ss.str());
//        return result.to_ulong();
//    }
//};
//
//int main()
//{
//    Solution sol;
//    uint32_t result = sol.reverseBits(0b00000010100101000001111010011100);
//
//    return 0;
//}