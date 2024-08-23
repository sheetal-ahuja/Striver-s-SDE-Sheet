// Slow and Fast Approach as it takes Space as O(1)   wherer as Brute Force Takes O(N+N) Time Complexity -> O(N+N)

ListNode* mergeTwoLists(ListNode* L1, ListNode* L2) {
        if(L1==NULL)
        {
            return L2;
        }
        if(L2==NULL)
        {
            return L1;
        }
        ListNode * result;
            if(L1->val < L2->val)
            {
                result = L1;
                result-> next = mergeTwoLists(L1-> next, L2);

            }
            else{
                result = L2;
                result-> next = mergeTwoLists(L1, L2-> next);
            }
        return result;
    }
