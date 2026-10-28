class Solution {
public:
    int calculateScore(int a, int b) {
        int x = bitset<8>(a).count();
        int y = bitset<8>(b).count();
        if(x>=y){return x*y;}
        return y/x;
    }
};