class Solution {
public:
    void insertsort(stack<int> &st,int x)
    {
        if(st.empty() || st.top()<x) // if x is bigger than st.top put it after top 
        {
            st.push(x);
            return;
        }

        int top=st.top();
        st.pop();
        insertsort(st,x);
        st.push(top);
    }
    void sortStack(stack<int> &st) {
        
        if(st.size()==1)
        {
            return;
        }

        int top=st.top();
        st.pop();

        sortStack(st);
        insertsort(st,top);

        
    }
};
