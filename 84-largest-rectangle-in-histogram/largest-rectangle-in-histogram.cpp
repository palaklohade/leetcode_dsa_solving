class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int> st;
        heights.push_back(0);
        int maxarea =  0;
        for(int i = 0 ; i < heights.size() ; i++){
            while(!st.empty() && heights[i] < heights[st.top()]){
                int h = heights[st.top()];
                st.pop();
                int width = st.empty() ? i : i - st.top() - 1;
                maxarea = max(maxarea, h * width);

            }
            st.push(i);
        }
        return maxarea;
    }
};