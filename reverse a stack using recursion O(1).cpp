class Solution {
public:
    void insertbottom(stack<int> &st,int x)  // it is a helping function for revesing of stack
    {
        if(st.empty())
        {
            st.push(x); 
            return;
        }
        int top=st.top();
        st.pop();
        insertbottom(st,x);
        st.push(top);
    }
    void reverseStack(stack<int> &st) {
        if(st.size()==1) // if only one element is there then it is already reversed
        {
            return;
        }

        int top=st.top();
        st.pop();
        reverseStack(st);
        insertbottom(st,top);
    }
};
