#include<stack>
class MyQueue {
    private:
    stack<int> s1,s2;
    
public:
    MyQueue() {
        
    }
    
    void push(int x) {
       s1.push(x);
    }
    
    int pop() {
        int n=s1.size(); // stack is LIFO but here queue FIFO so we put all in other stack such that we get FIFO ans we return that top of other stack s2
        if(s2.empty())
        {
            while(n>0)
        {
        
            int val=s1.top();
            s1.pop();
            s2.push(val);
            n--;
        }
        }
        
        int value=s2.top();
        s2.pop();
        return value;
        
    }
    
    int peek() {
        if(s2.empty())
        {
            while(!s1.empty())
            {
                s2.push(s1.top());
                s1.pop();
            }

        }
        int val=s2.top();
        return val;
    
        
    }
    
    bool empty() {
        if(s2.empty() && s1.empty())
        {
            return true;
        }

        return false;
        
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */
