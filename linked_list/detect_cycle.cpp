#include<iostream>
#include<vector>
#include<unordered_map>
#include<bits/stdc++.h>
using namespace std;

class solution{
    public:
    bool hascycle(ListNode *head){
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast!=NULL && fast->next!= NULL){
            slow = slow->next;
            fast = fast->next->next;

            if(slow==fast){
                return true;
            }
        }
        return false;
    }

}