class Solution {
public:
    int hIndex(vector<int>& citations) {
        int N = citations.size();
        int count = 0;
        sort(citations.rbegin(), citations.rend());
        for(int i = 0; i < N; i++) {
            if(i < citations[i]) count++;
            else break;
        }
        return count;
    }
};