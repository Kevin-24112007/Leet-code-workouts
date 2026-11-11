#define ll long long
class Solution {
public:
    long long minimumCost(int cost1, int cost2, int costBoth, int need1, int need2) {
        ll minval = min(need1, need2);
        ll maxval = max(need1, need2);
        ll ans = (ll)need1*cost1 + (ll)need2 * cost2;
        ans = min(ans, minval*costBoth + (need1 - minval)*cost1 + (need2 - minval)*cost2);
        ans = min(ans, maxval*costBoth);
        return ans;
    }
};