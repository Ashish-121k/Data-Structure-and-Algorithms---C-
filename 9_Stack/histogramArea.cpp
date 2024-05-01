class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        int prevsmall[n] , nextsmall[n];
        stack<int> st;

        //next small 
        for(int i = n-1; i>=0; i--){
            while(!st.empty() && heights[st.top()] >= heights[i]){
                st.pop();
            }
            if(st.empty()){
                nextsmall[i] = n-1;
            }
            else{
                nextsmall[i] = st.top() - 1;
            }
            st.push(i);
        }

        //clearing the stack for utilisation for prev small
        while(!st.empty()){
            st.pop();

        }

        // prev small 
        for(int i = 0; i<n; i++){
            while(!st.empty() && heights[st.top()] >= heights[i]){
                st.pop();
            }
            if(st.empty()){
                prevsmall[i] = 0;
            }
            else{
                prevsmall[i] = st.top() + 1;
            }
            st.push(i);
        }

        int Area = 0;
        for(int i = 0; i<n; i++){
            Area = max(Area, heights[i] * (nextsmall[i] - prevsmall[i] + 1));
        }
        return Area;
        
    }
};