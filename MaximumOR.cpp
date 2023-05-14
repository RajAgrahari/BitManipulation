//https://leetcode.com/problems/maximum-or/description/
long long maximumOr(vector<int>& nums, int k) 
    {
        int n = nums.size();
        vector<int> pre(n+1,0);
        vector<int> suf(n,0);
        pre[0] = 0;
        for(int i=1;i<n;i++)
        pre[i] = (pre[i-1] | nums[i-1]);
        
        suf[n-1] = 0;
        for(int j=n-2;j>=0;j--)
        suf[j]= (suf[j+1] | nums[j+1]);
        
        long long mx=(pre[0] | nums[0] | suf[0]);
        for(int i=0;i<n;i++)
        {
            mx = max(mx,pre[i] | ((long long)nums[i]<<k) | suf[i]);
        }
        return mx;
                     
    }
