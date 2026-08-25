class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        set<int>st;
        int n = nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]%k==0){st.insert(nums[i]);}
        }
        vector<int> v(st.begin(),st.end());
        sort(v.begin(),v.end());
        int ans = k;
        bool flag = false;
        if(v.size()==0){return k;}
        for(int i=0;i<v.size();i++){
            if(v[i]!=k*(i+1)){return k*(i+1);}
        }
        return k*(v.size()+1);
    }
};