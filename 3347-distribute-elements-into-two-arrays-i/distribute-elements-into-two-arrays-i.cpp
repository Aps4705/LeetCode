class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        int k = nums.size();
        int m=0,n=0;
        vector<int> v1,v2;
        v1.push_back(nums[0]);
        v2.push_back(nums[1]);
        for(int i=2;i<k;i++){
            if(v1[m]>v2[n]){v1.push_back(nums[i]);m++;}
            else{v2.push_back(nums[i]);n++;}
        }
        vector<int> ans ;
        ans.insert(ans.end(),v1.begin(),v1.end());
        ans.insert(ans.end(),v2.begin(),v2.end());
        return ans;
    }
};