class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int n = nums.size();
        long long ans=0LL;
        vector<long long> squares;
        for(int x:nums){
            squares.push_back(1LL*x*x);
        }
        sort(squares.begin(),squares.end());
        for(int i=0;i<n;i++){
            if(i<n/2){
                ans-=squares[i];
            }
            else{
                ans+=squares[i];
            }
        }
        return ans;
    }
};