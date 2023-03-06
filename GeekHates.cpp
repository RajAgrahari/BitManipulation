// https://practice.geeksforgeeks.org/problems/07e45fe40846bc670ad2507d2c649304699768b9/1
int noConseBits(int n) 
    {
        vector<int> num(32);
        for(int i=0;i<32;i++)
        num[i] = ((n>>i)&1);
        
        int ans = 0;
        for(int i=31;i>=0;i--)
        {
            ans += (num[i]<<i);
            
            if(i>1)
            {
                if(num[i]&num[i-1]&num[i-2])
                num[i-2] = 0;
            }
        }
        return ans;
    }
