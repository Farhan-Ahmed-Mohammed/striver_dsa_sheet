class Solution {             //BRUTE FORCE CODE 
public:
    string frequencySort(string s) {
        int n=s.size();
        unordered_map<char,int> freq;
        unordered_map<char,int> visited;
        string result;

        for(int i=0;i<n;i++)
        {
            freq[s[i]]++;
        }

        vector<int> ans;
        for(int i=0;i<n;i++)
        {
            if(visited[s[i]]!=1)
            {
                ans.push_back(freq[s[i]]);
                visited[s[i]]=1;
            }
            
        }

        sort(ans.begin(),ans.end(),greater<int>());

        int m=ans.size();
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(result.size()<s.size())
                {
                    if(ans[i]==freq[s[j]])
                {
                    while(freq[s[j]]!=0)
                    {
                        result+=s[j];
                        freq[s[j]]--;
                    }
                }
                }
                
            }
        }

        return result;
        
    }
};

//optimisesd solution using priority queue
class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> freq;
        int n=s.size();
        for(int i=0;i<n;i++)
        {
            freq[s[i]]++;
        }

        priority_queue<pair<int,char>> pq; // queue will be sorted based on first what written here <int,char> so based on int it is sorted but if <char,int> based on char they will be sorted

        for(auto it=freq.begin();it!=freq.end();++it)
        {
            pq.push({it->second,it->first});
        }

        string result;
        while(!pq.empty())
        {
            int cnt=pq.top().first;
            char ch=pq.top().second;
            pq.pop();
            result.append(cnt,ch); // here char is appended cnt no of times
        }

        return result;

    }
};
