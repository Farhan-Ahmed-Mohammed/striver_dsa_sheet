class Solution {
public:
    bool isValid(string s) {
        int n=s.size();
        
        stack<char> st;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='('||s[i]=='{'||s[i]=='[') //all opening put in stack 
            {
                st.push(s[i]);   
            }

            else
            {
                 if(st.empty())
                 {
                    return false;
                 }

               // compare in stack with the stack top element then pop it 
                if((s[i]==']' && st.top()!='[') ||
                (s[i]=='}' && st.top()!='{') ||
                (s[i]==')' && st.top()!='('))
                {
                    return false;
                }
                st.pop();
            
            }

        }
        
       if(st.empty()==true)
       {
        return true;
       }

       return false;

    }
};
