class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_set<int> hash;
        for(int n : nums) {
            if(n%k == 0) {
                hash.insert(n);
            }
        }
        int mul = 1;
        while(hash.contains(k*mul)) {
            mul++;
        }
        return k*mul;
    }
};