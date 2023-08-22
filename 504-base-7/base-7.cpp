class Solution {
public:
    string convertToBase7(int num) {
        if(num==0)
            return "0";
        int neg=0;
        if(num<0)
        {
            num=-num;
            neg=1;
        }

        vector<long long>n;
        while(num>0)
        {
            n.push_back(num%7);
            num=num/7;
        }
        int s=n.size();
        string result = "";
    
        for(int i = s - 1; i >= 0; i--)
            result += to_string(n[i]); 
        if(neg)
            result="-"+result;
    
     return result;
    
    }
};