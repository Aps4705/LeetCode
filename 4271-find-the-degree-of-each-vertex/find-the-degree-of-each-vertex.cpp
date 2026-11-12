class Solution {
public:
    vector<int> findDegrees(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        vector<int>ans;
        for(int i=0;i<m;i++){
            int k=0;
            for(int j=0;j<n;j++){
                if(matrix[i][j]==1){k++;}
            }
            ans.push_back(k);
        }
        return ans;
    }
};