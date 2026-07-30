class Solution {
public:
    int minimumPushes(string word) {
        int num = 1;
        int press = 0;
        int ans = 0;
        for(char ch : word) {
            if(press == 8) {
                num++;
                press = 0;
            }
            ans += num;
            press++;
        }
        return ans;
    }
};