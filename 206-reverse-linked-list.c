/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

#if 1
// 迭代
struct ListNode* reverseList(struct ListNode* head){
    struct ListNode *cur = head;
    struct ListNode *pre = NULL;
    struct ListNode *next = NULL;

    while(cur != NULL) {
        next = cur->next;
        cur->next = pre;
        pre = cur;
        cur = next;
    }
    return pre;
}

#else
// 递归
struct ListNode* reverseList(struct ListNode* head){
    if (NULL == head || NULL == head->next) {
        return head;
    }

    struct ListNode *new = reverseList(head->next);
    head->next->next = head;
    head->next = NULL;
    
    return new;
}

#endif