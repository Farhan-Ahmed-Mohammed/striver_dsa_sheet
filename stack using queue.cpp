#include<queue>
class MyStack {
    private:
    queue<int> q;
public:
    MyStack() {
        
    }
    
    void push(int x) {
        q.push(x);
        int size=q.size();

        for(int i=0;i<size-1;i++) // here we have to make it like stack FILO but queue has FIFO so we are putting the number which we put in queue last by putting all the elements after x before it so that it should be last out
        {
            q.push(q.front());
            q.pop();
        }
        
    }
    
    int pop() {
        if(q.size()>0)
        {
            int val=q.front();
            q.pop();
            return val;
        }

        return -1;
        
    }
    
    int top() {
        if(q.size()>0)
        {
            return q.front();
        }

        return -1;
        
    }
    
    bool empty() {
        if(q.empty())
        {
            return true;
        }

        return false;
        
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
