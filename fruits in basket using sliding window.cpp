class Solution{
  public:
    int totalFruits(vector<int>& fruits){
        int left=0;
        int maxi=0;
        unordered_map<int,int> freq;
        for(int right=0;right<fruits.size();right++)
        {
          freq[fruits[right]]++;
          while(freq.size()>2)
          {
            freq[fruits[left]]--;
            
            if (freq[fruits[left]]==0)
            {
                 freq.erase(fruits[left]);  //to remove the left most fruit from the basket
            }
            left++;
          }

          maxi=max(maxi,right-left+1);

        
        }

        return maxi;

        
    }
};
