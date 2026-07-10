class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        unordered_map<string,int> freq;
        unordered_set<string> s;
        for(int i = 0; i < banned.size(); i++){
            s.insert(banned[i]);
        }
        string temp = "";
        for(char ch : paragraph){
            if(isalnum(ch)) temp += tolower(ch);
            else{
                if(s.count(temp)) temp = "";
                else{
                    if(temp == "") continue;
                    else {
                        freq[temp]++;
                        temp = "";
                    }
                }
            }
        }
        if(!temp.empty()){
            if(!s.count(temp)) freq[temp]++;
        }
        string ans = "";
        int temp1 = -1;
        for(auto [key,val] : freq){
            if(temp1 < val){
                ans = key;
                temp1 = val;
            }
        }
        return ans;
    }
};