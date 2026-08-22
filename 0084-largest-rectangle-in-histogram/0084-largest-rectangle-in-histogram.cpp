class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int N = heights.size();
        stack<int> st;
        int max_area = 0;
        for(int i = 0; i < N; i++) {
            while(!st.empty() && heights[i] <= heights[st.top()]) {
                int h = heights[st.top()];
                st.pop();
                int w = st.empty() ? i : i - st.top() -1;
                int area = h*w;
                max_area = max(max_area, area);
            }
            st.push(i);
        }
        while(!st.empty()) {
            int i = st.top();
            st.pop();
            int cur = heights[i]*(st.empty() ? N : N-1-st.top());
            max_area = max(max_area, cur);
        }
        return max_area;
    }
};