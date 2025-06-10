class Solution {
public:
    int maxDifference(string s) {
        int n=s.size();
        unordered_map<char,int> check;
        int maxi;
        int mini;
        for(int i=0;i<n;i++)
        {
            check[s[i]]++;
           
        }
        vector<int> odd;
        vector<int> even;
       for(auto i=check.begin();i!=check.end();i++)
       {
         int ch=i->first;
         int cnt=i->second;
         if(cnt%2!=0)
         {
            odd.push_back(cnt);
         }

         else
         {
            even.push_back(cnt);
         }
       }
       
       int m1=odd.size();
       sort(odd.begin(),odd.end());
       sort(even.begin(),even.end());
       if(!odd.empty())
       {
         maxi=odd[m1-1];
       }

       if(!even.empty())
       {
          mini=even[0];
       }
        
      
       return maxi-mini;

        
    }
};
