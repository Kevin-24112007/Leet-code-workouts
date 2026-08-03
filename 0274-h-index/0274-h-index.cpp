class Solution {
public:
    int hIndex(vector<int>& citations) {
        sort(citations.rbegin(), citations.rend());
        int N = citations.size();
        int count = 0;
        for(int i = 0; i < N; i++) {
            if(citations[i] > i) {
                count++;
            }
            else break;
        }
        return count;
    }
};