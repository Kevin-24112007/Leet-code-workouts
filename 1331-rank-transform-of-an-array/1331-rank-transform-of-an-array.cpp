class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> sorted = arr;
        sort(sorted.begin(), sorted.end());
        unordered_map<int,int> rank;
        int curr_rank = 1;
        for(int num : sorted){
            if(!rank.count(num)) rank[num] = curr_rank++;
        }
        for(int &num : arr) num = rank[num];
        return arr;
    }
};