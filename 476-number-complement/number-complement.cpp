class Solution {
public:
    int findComplement(int num) {
        vector<int> n;
        long long int d=0;
        while(num!=0)
        {
            n.push_back(num%2);
            num=num/2;
        }
        for(int i=0;i<n.size();i++)
        {
            if(n[i]==0)
                n[i]=1;
            else
                n[i]=0;
        }
       for(int i=n.size()-1;i>=0;i--)
       {
           d+=n[i]*pow(2,i);
       }
       return d;
        
    }
};