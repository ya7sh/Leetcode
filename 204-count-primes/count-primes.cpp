class Solution {
public:
    int countPrimes(int n) {
        vector<int> p(n+1,0);
        int c=0;
        for(int i=2;i*i<=n;i++)
        {
            if(p[i]==0)
            {
                for(int j=i*i;j<=n;j+=i)
                {
                    p[j]=1;
                }
            }
        }
        if(n<=2)
            return 0;
        else
            for(int i=2;i<n;i++)
                if(p[i]==0)
                {
                    c++;
                }
            return c;
    }
};