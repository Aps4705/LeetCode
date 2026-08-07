class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int sum,i,j,result[2];
        for(i=0;i<nums.size();i++){
            for(j=0;j<nums.size();j++){
                if(j==i){continue;}
                if(nums[i] + nums[j]==target){
                    return{i,j};
                }
            }
        }
        return {};
    }
};