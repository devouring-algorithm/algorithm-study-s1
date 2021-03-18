﻿/*
1290. Convert Binary Number in a Linked List to Integer
https://leetcode.com/problems/convert-binary-number-in-a-linked-list-to-integer/
*/

#include <iostream>
using namespace std;

  //Definition for singly-linked list.
  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 
class Solution {
public:
    int result = 0;
    int getDecimalValue(ListNode* head) {
        while (head->next != NULL)
        {
            result = result * 2 + (head->val) * 2;
            head = head->next;
        }
        result += head->val;
        return result;
    }
};

