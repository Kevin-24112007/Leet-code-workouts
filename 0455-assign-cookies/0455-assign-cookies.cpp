class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int CO = s.size(), CH = g.size();
        if(CO == 0) return 0;
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        int ans = 0;
        int cookie = CO-1, child = CH-1;
        while(cookie >= 0 && child >= 0) {
            if(s[cookie] >= g[child]) {
                ans++;
                cookie--;
                child--;
            }
            else {
                child--;
            }
        }
        return ans;
    }
};