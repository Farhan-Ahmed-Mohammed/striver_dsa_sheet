// class Solution{	
// 	public:		
// 		vector<int> singleNumber(vector<int>& nums){
// 			unordered_map<int,int> freq;
//             vector<int> ans;
//             int n=nums.size();
//             for(int i=0;i<n;i++)
//             {
//                 freq[nums[i]]++;
//             }

//             for(int i=0;i<n;i++)
//             {
//                 if(freq[nums[i]]%2==1)
//                 {
//                     ans.push_back(nums[i]);
//                 }
//             }

//             sort(ans.begin(),ans.end());
//             return ans;
// 		}
// };
// better solution is below 
class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int n=nums.size();
        long long int xorz=0;
        for(int i=0;i<n;i++)
        {
            xorz=xorz^nums[i];
        }

        long long int num=(xorz) & (xorz-1)^xorz; // to get the right most bit to make difference bw two numbers

        int  b1=0;
        int  b2=0;

        for(int i=0;i<n;i++)
        {
            if(nums[i]&num) //dont check like nums[i]&num==1 bcoz we want non zero bits not 10 bit
            {
                b1=b1^nums[i];
            }

            else
            {
                b2=b2^nums[i];
            }
        }

        return {b1,b2};
        
    }
};

