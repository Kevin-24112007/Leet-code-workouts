class MinStack {
public:

    stack<int> st, minN;

    MinStack() {
        
    }
    
    void push(int value) {
        st.push(value);
        if(minN.empty() || minN.top() >= value) minN.push(value);
    }
    
    void pop() {
        if(st.top() == minN.top()) minN.pop();
        st.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return minN.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */