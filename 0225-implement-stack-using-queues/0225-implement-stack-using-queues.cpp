class MyStack {
public:

    queue<int> q;

    MyStack() {
        
    }
    
    void push(int x) {
        q.push(x);
        int N = q.size();
        for(int i = 0; i < N-1; i++) {
            int e = q.front();
            q.push(e);
            q.pop();
        }
    }
    
    int pop() {
        int t = q.front();
        q.pop();
        return t;
    }
    
    int top() {
        return q.front();
    }
    
    bool empty() {
        return q.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */