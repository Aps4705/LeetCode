class Solution {
public:
        bool check(vector<int>&piles,int h,int k){
            long long int hrs = 0;
            for(int pile : piles){
                hrs+=ceil((double)pile/k);
            }
            return hrs<=h;
        }

    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        int ans=0;
        sort(piles.begin(),piles.end());
        int low = 1,high = piles[n-1];
        while(low<=high){
            int mid = low + (high-low)/2;
            if(check(piles,h,mid)){
                    ans = mid;
                    high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return ans;
    }
};