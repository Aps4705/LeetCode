class Solution {
    int light(int x){
        string s = to_string(x);
        sort(s.rbegin(),s.rend());
        return stoi(s);
    }
public:
    long long maximizeSum(vector<int>& nums, int k) {
        vector<int>gains;
        int n = nums.size();
        long long ans = 0LL;
        for(int x: nums){
            ans+=x;
            gains.push_back(light(x)-x);
        }
        sort(gains.rbegin(),gains.rend());
        for(int i=0;i<min(k,n);i++){
            ans+=gains[i];
        }
        return ans;
    }
};