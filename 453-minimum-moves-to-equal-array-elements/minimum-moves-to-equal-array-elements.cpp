class Solution {
public:
    int minMoves(vector<int>& nums) {
        int minVal=*min_element(nums.begin(),nums.end());
        int cnt=0;

        for (int num:nums) {
            cnt+=num-minVal;
        }

        return cnt;
    }
};