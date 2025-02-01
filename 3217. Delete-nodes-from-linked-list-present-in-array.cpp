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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        unordered_map <int,int> mp;
        for(int i : nums){
            mp[i]++;
        }

        while(head && mp[head->val]>0){
            head=head->next;
        }

        ListNode* temp = head;
        ListNode* prev = nullptr;
        while(temp){
            if(mp[temp->val]>0){
                prev ->next = temp-> next;
            }
            else{
                prev = temp;
            }
            
            temp = temp->next;
        }
        return head;
        
    }
};
