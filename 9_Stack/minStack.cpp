class MinStack {
public:
    vector<pair<int, int>>st;

    MinStack() {
        
    }
    
    void push(int val) {
       if(st.empty()){
        pair<int, int> p;
        p.first = val;
        p.second = val;
        st.push_back(p);
       } 
       else{
        pair<int, int> p;
        p.first = val;
        int prevMin = st.back().second;
        p.second = min(val, prevMin);
        st.push_back(p);
       }
    }
    
    void pop() {
       st.pop_back(); 
    }
    
    int top() {
        pair<int, int> value = st.back();
        return value.first;

    }
    
    int getMin() {
        pair<int, int> value = st.back();
        return value.second;
    }
    
};
