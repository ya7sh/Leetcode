class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size();
        int a[n-1];
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-1;i++)
        {
            if(!(nums[i]^nums[i+1]))
                return nums[i];
        }

    return 0;
        
    }
};