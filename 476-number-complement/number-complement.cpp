class Solution {
public:
    int findComplement(int n) {
        if(n==0){return 1;}
        vector<int> v;
        while(n!=0){
            int k = n%2;
            if(k==1){v.push_back(0);}
            else{v.push_back(1);}
            n/=2;

        }
        int ans=0;
        int x = v.size();
        for(int i=0;i<x;i++){
            if(v[i]==1){
                ans+= 1<<i;
            }
        }
        return ans;
    }
};