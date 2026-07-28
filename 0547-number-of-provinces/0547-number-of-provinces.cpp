class Solution {

private:
int find(vector<int>& leader, int node) {
    if(leader[node] != node) {
        leader[node] = find(leader, leader[node]);
    }
    return leader[node];
}

void join(vector<int>& leader, int l, int r) {
    leader[find(leader, r)] = find(leader, l);
}

public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int N = isConnected.size();
        vector<int> leader(N);
        for(int i = 0;i < N; i++) leader[i] = i;
        for(int r = 0; r < N; r++) {
            for(int c = 0; c < N; c++) {
                if(isConnected[r][c] == 1) {
                    join(leader, r, c);
                }
            }
        }
        unordered_set<int> leaders;
        for(int l = 0; l < N; l++) {
            leaders.insert(find(leader, l));
        }
        return leaders.size();
    }
};