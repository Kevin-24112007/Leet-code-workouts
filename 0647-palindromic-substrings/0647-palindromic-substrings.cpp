class Solution {

private:
    int palindrome_count(string& s, int l, int r){
        int c = 0;
        while((l >= 0) && (r < s.size()) && (s[l] == s[r])){
            c++;
            r++;
            l--;
        }
        return c;
    }

public:
    int countSubstrings(string s) {
        int count = 0;
        for(int i = 0; i < s.size(); i++){
            count += palindrome_count(s,i,i);
            count += palindrome_count(s,i,i+1);
        }
        return count;
    }
};