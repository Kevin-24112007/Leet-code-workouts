class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int> ans;
        string s = "123456789";
        string low_limit = to_string(low), up_limit = to_string(high);
        for(int i = low_limit.size(); i <= up_limit.size(); i++){
            for(int idx = 0; idx <= 9-i; idx++){
                string n = s.substr(idx,i);
                int num = stoi(n);
                if(num >= low && num <= high) ans.push_back(num);
            }
        }
        return ans;
    }
};