class Solution {

private:
    bool isAlpha(char ch) {
        return (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z');
    }

public:
    string shortestCompletingWord(string licensePlate, vector<string>& words) {
        vector<int> hash(26, 0);
        int N = licensePlate.size();
        for(int i = 0; i < N; i++) {
            if(isAlpha(licensePlate[i])) {
                char ch = tolower(licensePlate[i]);
                hash[ch-'a']++;
            }
        }
        string ans = "";
        int min_len = INT_MAX, W = words.size();
        for(int w = 0; w < W; w++) {
            vector<int> temp(26, 0);
            bool ok = true;
            int L = words[w].size();
            for(int i = 0; i < L; i++) {
                temp[words[w][i] - 'a']++;
            }
            for(int i = 0; i < 26; i++) {
                if(hash[i] > temp[i]) {
                    ok = false;
                    break;
                }
            }
            if(ok && min_len > L) {
                ans = words[w];
                min_len = L;
            }
        }
        return ans;
    }
};