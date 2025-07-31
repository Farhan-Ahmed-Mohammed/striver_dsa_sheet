class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {  // arrange stack in accending or decending order is monotonic stack
        unordered_map<int,int> nge;
        stack<int> st;
        vector<int> ans;
        int n=nums1.size();
        int m=nums2.size();

        for(int i=m-1;i>=0;i--)
        {
            while(!st.empty() && st.top()<=nums2[i]) // here we have stack in decending order from bottom to top 
            {
                st.pop();
               
            }

             if(!st.empty())
            {
                 nge[nums2[i]]=st.top();
            }

             if(st.empty())
            {
                nge[nums2[i]]=-1;
            }

            st.push(nums2[i]);
        }

        for(int i=0;i<n;i++)
        {
            ans.push_back(nge[nums1[i]]);
        }

        return ans;
    }
};
