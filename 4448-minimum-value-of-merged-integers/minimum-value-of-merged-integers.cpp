class Solution {
    int merge(int a,int b){
        if(b==0){return a;}
        int digits = to_string(b).size();
        return a*pow(10,digits) +b;
    }
public:
    int minMergedInteger(vector<int>& nums) {
        int n = nums.size();
        int ans = INT_MAX;
        if(n%2==0){n=n-1;}
        for(int i=0;i<n;i+=2){
            int l = merge(nums[i],nums[i+1]);
            ans = min(ans,l);
        }
        return ans;
    }
};