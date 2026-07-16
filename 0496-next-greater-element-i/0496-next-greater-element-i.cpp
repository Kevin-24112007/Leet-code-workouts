class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int N = nums2.size();
        unordered_map<int,int> next;
        stack<int> s;
        for(int i = N-1;i >= 0; i--){
            while(!s.empty() && s.top() <= nums2[i]) s.pop();
            next[nums2[i]] = s.empty() ? -1 : s.top();
            s.push(nums2[i]);
        }
        vector<int> ans;
        for(int n : nums1){
            ans.push_back(next[n]);
        }
        return ans;
    }
};