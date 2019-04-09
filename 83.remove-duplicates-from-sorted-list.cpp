/*
 * @lc app=leetcode id=83 lang=cpp
 *
 * [83] Remove Duplicates from Sorted List
 *
 * https://leetcode.com/problems/remove-duplicates-from-sorted-list/description/
 *
 * algorithms
 * Easy (42.10%)
 * Total Accepted:    313.7K
 * Total Submissions: 743.6K
 * Testcase Example:  '[1,1,2]'
 *
 * Given a sorted linked list, delete all duplicates such that each element
 * appear only once.
 * 
 * Example 1:
 * 
 * 
 * Input: 1->1->2
 * Output: 1->2
 * 
 * 
 * Example 2:
 * 
 * 
 * Input: 1->1->2->3->3
 * Output: 1->2->3
 * 
 * 
 */
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if (!head)
            return NULL;
        
        ListNode* res = head;
        ListNode* curr = head -> next;
        
        while(curr != NULL)
        {
            head -> next = NULL;

            if (head->val == curr->val)
                curr = curr->next;
            else
            {
                head -> next = curr;
                head = head->next;
                curr = curr->next;
            }
        }
        return res;
    }
};

