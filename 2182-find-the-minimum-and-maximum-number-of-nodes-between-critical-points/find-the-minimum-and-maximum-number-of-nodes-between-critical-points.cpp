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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int> v;
        while(head!=NULL){
            v.push_back(head->val);
            head = head->next;
        }
        vector<int> ans(2);
        if(v.size()<=3){
            ans[0]=-1;
            ans[1]=-1;
            return ans;
        }
        vector<int> x;
        
        for(int i=1;i<v.size()-1;i++){
            if(v[i]>v[i+1] && v[i]>v[i-1]){x.push_back(i);}
            else if(v[i]<v[i+1] && v[i]<v[i-1]){x.push_back(i);}
        }
         if (x.size() < 2) {
            ans[0] = -1;
            ans[1] = -1;
            return ans;
        }
        int n = x.size();
        int f = INT_MAX;
        for(int i=1;i<n;i++){
            int diff = x[i]-x[i-1];
            f = min(f,diff);
        }
        ans[0] = f,ans[1]=x[n-1]-x[0];
        return ans;
    }
};