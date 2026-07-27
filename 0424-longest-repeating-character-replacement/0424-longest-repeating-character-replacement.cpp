class Solution {
public:
    int characterReplacement(string s, int k) {
        int ans = 0, maxFreq = 0, l = 0;
        int N = s.size();
        vector<int> hash(26,0);
        for(int r = 0; r < N; r++) {
            char ch = s[r];
            maxFreq = max(maxFreq, ++hash[ch-'A']);
            while(r - l + 1 - maxFreq > k) {
                hash[s[l] - 'A']--;
                l++;
            }
            ans = max(ans, r - l + 1);
        }
        return ans;
    }
};