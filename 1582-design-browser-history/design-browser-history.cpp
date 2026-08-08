class BrowserHistory {
    vector<string> s;
    int curr;
public:
    BrowserHistory(string homepage) {
        s.push_back(homepage);
        curr=0;
    }
    
    void visit(string url) {
        s.erase(s.begin()+curr+1,s.end());
        s.push_back(url);
        curr++;
    }
    
    string back(int steps) {
        curr = max(0,curr-steps);
        return s[curr];
    }
    
    string forward(int steps) {
        curr = min((int)s.size()-1,curr+steps);
        return s[curr];
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */