class Solution {
public:
    int myAtoi(string s) {
       int n=s.size();
       string temp;
       bool check=false;
       bool checkp=false;
       long long ans=0;
       int store;
      

       if(s[0]=='.')
       {
        return 0;
       }

       for(int i=0;i<n;i++)
       {
         if((check==true || checkp==true) && (s[store+1]==' '))
         {
            temp="";
            break;
         }
       
             if((s[i]=='-' || s[i]=='+') && temp.empty())
            {
                if(check==true || checkp==true)
                {
                    break;
                }

                if(s[i]=='+')
                {
                    checkp=true;
                    store=i;
                    continue;
                }

                check=true;
                store=i;
                continue;
            }

            if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z'))
            {
                break;
            }

            if((s[i]<'0' || s[i]>'9') && !temp.empty())
            {
                break;
            }

            else if(s[i]<'0' || s[i]>'9')
            {
                continue;
            } 

                temp+=s[i];
                
       }

       int m=temp.size();


       for(int i=0;i<m;i++)
       {
        ans=ans+(temp[i]-'0');
        if(i==m-1)
        {
            break;
        }
        if(ans*10+(temp[i+1]-'0')>INT_MAX && check==false)
        {
            ans= INT_MAX;
            break;
        }

         if(ans*10+(temp[i+1]-'0')>INT_MAX && check==true)
        {
            ans= INT_MIN;
            break;
        }
            ans=ans*10;
       }

       if(check==true)
       {
        ans=-ans;
       }

       return ans;
        
    }
};
