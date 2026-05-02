class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        vector<int> freq(26,0);
        for(int i=0;i<tasks.size();i++)
        {
            freq[tasks[i]-'A']++;
        }

        priority_queue<int> pq;
        for(int i=0;i<26;i++)
        {
            if(freq[i]>0)
            {
                pq.push(freq[i]);
            }
        }

        int time=0;
        while(!pq.empty())
        {
            int cycle=n+1;
            vector<int> temp;
            for(int i=0;i<cycle;i++)
            {
                if(!pq.empty())
                {
                    int maxi=pq.top();
                    pq.pop();
                    maxi--;
                    if(maxi>0)
                    {
                        temp.push_back(maxi);
                    }
                }
                time++;

                if(pq.empty() && temp.empty())
                {
                    break;
                }
            }

            for(int i=0;i<temp.size();i++)
            {
                pq.push(temp[i]);
            }
        }
        return time;
    }
};
