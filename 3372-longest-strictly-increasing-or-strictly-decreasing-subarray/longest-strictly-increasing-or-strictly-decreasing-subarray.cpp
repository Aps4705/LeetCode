class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int n = nums.size();
        if(n==1){return 1;}
        int ans = INT_MIN;
        for(int i=0;i<n-1;i++){
            int k=1;
            if(nums[i+1]>nums[i]){
            for(int j=i+1;j<n;j++){
                if(nums[j]>nums[j-1]){k++;}
                else{break;}
            }
            }
            else if(nums[i+1]<nums[i]){
            for(int j=i+1;j<n;j++){
                if(nums[j]<nums[j-1]){k++;}
                else{break;}
            }
            }
            ans = max(ans,k);
        }
        return ans;
    }
};