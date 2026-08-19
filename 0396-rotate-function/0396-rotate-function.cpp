class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
        int N = nums.size();
        long long sum = 0, curr = 0;
        for(int i = 0; i < N; i++) {
            sum += nums[i];
            curr += nums[i] * i;
        }
        long long ans = curr;
        for(int i = 1; i < N; i++) {
            curr = curr + sum - (N * nums[N-i]);
            ans = max(ans, curr);
        }
        return (int)ans;
    }
};