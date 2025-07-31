class Solution {
public:
    vector<int> nextSmallerElements(const vector<int>& arr) {
        int n=arr.size();
        unordered_map<int,int> nse;
        vector<int> ans;
        stack<int> st;

        for(int i=n-1;i>=0;i--)
        {
            while(!st.empty() && st.top()>=arr[i])
            {
                st.pop();
            }

            if(!st.empty())
            {
                nse[i]=st.top();
            }

            else
            {
                nse[i]=-1;
            }

            st.push(arr[i]);
        }

        for(int i=0;i<n;i++)
        {
            ans.push_back(nse[i]);
        }

        return ans;
        
    }
};
