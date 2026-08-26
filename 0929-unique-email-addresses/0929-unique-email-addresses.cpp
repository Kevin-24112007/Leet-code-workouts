class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        unordered_set<string> hash;
        for(string email : emails) {
            string str = "";
            for(char ch : email) {
                if(ch == '+' || ch == '@') break;
                if(ch == '.') continue;
                str += ch;
            }
            str += email.substr(email.find('@'));
            hash.insert(str);
        }
        return hash.size();
    }  
};