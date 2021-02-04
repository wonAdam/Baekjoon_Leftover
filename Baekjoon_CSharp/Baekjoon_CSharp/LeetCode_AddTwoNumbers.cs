//using System;
//using System.Collections.Generic;
//using System.Text;

//namespace Baekjoon_CSharp
//{
    
//    //Definition for singly-linked list.
//    public class ListNode
//    {
//        public int val;
//        public ListNode next;
//        public ListNode(int val = 0, ListNode next = null)
//        {
//            this.val = val;
//            this.next = next;
//        }
//    }

//    public ListNode AddTwoNumbers(ListNode l1, ListNode l2)
//    {
//        ListNode result = new ListNode();
//        ListNode curr = result;
//        int carry = 0;
//        do
//        {
//            int first = l1 == null ? 0 : l1.val;
//            int second = l2 == null ? 0 : l2.val;

//            curr.val = (first + second + carry) % 10;
//            carry = (first + second + carry) / 10;

//            if (l1 != null) l1 = l1.next;
//            if (l2 != null) l2 = l2.next;

//            if (l1 != null || l2 != null || carry != 0)
//            {
//                curr.next = new ListNode();
//                curr = curr.next;
//            }

//        } while (l1 != null || l2 != null || carry != 0);

//        return result;
//    }


//}
