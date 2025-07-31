class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n=nums.size();
        stack<int> st;
        unordered_map<int,int> nge;
        vector<int> ans;

        for(int i=2*n-1;i>=0;i--) // make a double index to visit again the prevoius elements as we want to check in circular 
        {
            while(!st.empty() && st.top()<=nums[i%n])
            {
                st.pop();
            }

            if(i<n) // we want values from 0 to n only out of that values are out of bound
            {
                if(!st.empty())
                {
                    nge[i]=st.top();
                }

                if(st.empty())
                {
                    nge[i]=-1;
                }
            }

            st.push(nums[i%n]);
        }

        for(int i=0;i<n;i++)
        {
            ans.push_back(nge[i]);
        }

        return ans;
       
    }
};
