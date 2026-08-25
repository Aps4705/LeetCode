class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& a, vector<vector<int>>& b) {
        int m = a.size();
        int n = b.size();
        
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(b[j][0]>a[i][0]){break;}
                if(a[i][0]==b[j][0]){
                    a[i][1]+=b[j][1];
                    b.erase(b.begin()+j);
                    n--;
                    }
                    
            }
        }
        a.insert(a.end(),b.begin(),b.end());
        sort(a.begin(),a.end());
        return a;
    }
};