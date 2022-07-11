/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverse(ListNode* head) {
        if(head->next == NULL) {
            return head;
        }
        ListNode* reversedHead = reverse(head->next);
        head->next->next = head;
        head->next = NULL;
        return reversedHead;
    }
    ListNode* reverseList(ListNode* head) {
        /*Iterative methode*/
        if(head == NULL) return NULL;
        
//         ListNode *p=NULL, *c=head, *n=head->next;
//         while(c!=NULL) {
//             c->next = p;
//             p = c;
//             c = n;
//             if(n!=NULL) n = n->next;
//         }
//         return p;
        return reverse(head);
        
    }
};
