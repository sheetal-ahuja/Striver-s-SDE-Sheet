//Two approaches -> Recursive and Iterative
// Iterative Method T-> O(N) S-> O(1)
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* temp = head;
        ListNode* prev = NULL;

        while(temp!=NULL){
            ListNode* front = temp-> next;
            temp-> next = prev;
            prev = temp;
            temp= front;
        }
        return prev;
    }
};

//Recusrsive Method T-> O(N) S-> O(1)
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
       if(head == NULL|| head-> next == NULL)
       {
        return head;
       }

       ListNode* Last = reverseList(head->next);

       head->next->next = head;
       head->next = NULL;

       return Last;
    } 
};
