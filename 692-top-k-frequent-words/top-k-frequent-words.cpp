class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        map<string,int> mp;
        int n = words.size();
        for(int i=0;i<n;i++){
            mp[words[i]]++;
        }
        vector<string> v;
        for(auto it : mp){
            v.push_back(it.first);
        }
        sort(v.begin(),v.end(),[&](string a,string b){
            if(mp[a]==mp[b]){
                return a<b;
            }
            return mp[a]>mp[b];
        });
        return vector<string>(v.begin(),v.begin()+k);
    }
};