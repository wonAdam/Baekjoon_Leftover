//// https://leetcode.com/problems/merge-two-sorted-lists/
//
//using namespace std;
//
//// Definition for singly-linked list.
//struct ListNode {
//    int val;
//    ListNode *next;
//    ListNode() : val(0), next(nullptr) {}
//    ListNode(int x) : val(x), next(nullptr) {}
//    ListNode(int x, ListNode *next) : val(x), next(next) {}
//};
// 
//class Solution {
//public:
//    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
//        ListNode* list1Cursor = list1;
//        ListNode* list2Cursor = list2;
//
//#pragma region Result List Init
//        ListNode* currTail = nullptr; 
//        ListNode* resultHead = nullptr;
//        if (list1 != nullptr && list2 != nullptr)
//        {
//            if (list1->val > list2->val)
//            {
//                currTail = resultHead = list2;
//                list2Cursor = list2Cursor->next;
//            }
//            else
//            {
//                currTail = resultHead = list1;
//                list1Cursor = list1Cursor->next;
//            }
//        }
//        else
//        {
//            if (list1 == nullptr && list2 != nullptr)
//            {
//                currTail = resultHead = list2;
//                list2Cursor = list2Cursor->next;
//            }
//            else if (list1 != nullptr && list2 == nullptr)
//            {
//                currTail = resultHead = list1;
//                list1Cursor = list1Cursor->next;
//            }
//            else
//            {
//                return nullptr;
//            }
//        }
//#pragma endregion
//
//#pragma region Result List Construction
//
//        while (list1Cursor != nullptr || list2Cursor != nullptr)
//        {
//            if (list1Cursor != nullptr && list2Cursor != nullptr)
//            {
//                if (list1Cursor->val >= list2Cursor->val)
//                {
//                    ListNode* nextList2Cursor = list2Cursor->next;
//                    currTail->next = list2Cursor;
//                    currTail = currTail->next;
//                    list2Cursor = nextList2Cursor;
//                }
//                else /*if (list1Cursor->val < list2Cursor->val)*/
//                {
//                    ListNode* nextList1Cursor = list1Cursor->next;
//                    currTail->next = list1Cursor;
//                    currTail = currTail->next;
//                    list1Cursor = nextList1Cursor;
//                }
//            }
//            else // only one list left
//            {
//                while(list1Cursor != nullptr)
//                {
//                    currTail->next = list1Cursor;
//                    list1Cursor = list1Cursor->next;
//                    currTail = currTail->next;
//                }
//                while (list2Cursor != nullptr)
//                {
//                    currTail->next = list2Cursor;
//                    list2Cursor = list2Cursor->next;
//                    currTail = currTail->next;
//                }
//            }
//        }
//#pragma endregion
//
//        return resultHead;
//    }
//};
//
//
//int main()
//{
//    ListNode
//    return 0;
//}