class Solution {
public:
    string reverseWords(string s) {
        string ans = "", word = "";
        
        for(const char ch : s){
            if(ch == ' '){
                if(!word.empty()){
                    reverse(word.begin(), word.end());
                    ans += word;
                    ans += " ";
                    word = "";
                }
            }
            else word += ch;
        }
        if(!word.empty()){
            reverse(word.begin(), word.end());
            ans += word;
        }
        else if(!ans.empty() && ans.back() == ' ') ans.pop_back(); 
        
        return ans;
    }
};