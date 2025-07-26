class MinStack {
    private:
    stack<int> st;
    stack<int> st2;
    
public:
    MinStack() {
        
    }
    
    void push(int val) {
        st.push(val);
        if(st2.empty() || val<=st2.top())
        {
            st2.push(val);
        }
          // dont use mini like variable bcoz when we pop minimum from stack but mini will be the same until we get next smaller than this so this is wrong we put the poped mini in stack2 in next iteration but it is popped

         
    }
    
    void pop() {

        if(st2.top()==st.top())
        {
            st2.pop();
        }
         st.pop();
 
    }
    
    int top() {
        return st.top();
        
    }
    
    int getMin() {
        
        return st2.top();
        
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
