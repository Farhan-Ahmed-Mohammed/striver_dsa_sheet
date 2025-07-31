class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        int n=asteroids.size();
        stack<int> st;
        
        for(int i=0;i<n;i++)
        {
            int current=asteroids[i];
            bool destoried=false;

            while(!st.empty() && current<0 && st.top()>0)
            {
                if(abs(current)>st.top()) // as top is small it explodes
                {
                    st.pop();
                    continue;
                }

                else if(abs(current)==st.top())
                {
                    st.pop();
                    destoried=true;  // current is destroyed
                    break;

                }

                else
                {
                    destoried=true;  // here st.top() is greater then current so no need to pop and current is destroyed
                    break;
                }
        }

        if(destoried==false) // it means current astroied is not destroyed
        {
            st.push(current);
        }
        
     }
    int m=st.size();
    vector<int> ans(m);
     for(int i=m-1;i>=0;i--)
     {
        ans[i]=st.top();
        st.pop();
     }

     return ans;
    
    }
};
