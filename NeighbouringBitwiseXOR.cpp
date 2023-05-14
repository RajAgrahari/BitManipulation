//https://leetcode.com/contest/weekly-contest-345/problems/neighboring-bitwise-xor/
bool doesValidArrayExist(vector<int>& derived) 
    {
        int x=1,n=derived.size();
        for(int i=0;i<n-1;i++)
        {
            x = x^derived[i];
        }
        if(x^1 == derived[n-1])
        return true;
        x=0;
        for(int i=0;i<n-1;i++)
        {
            x = x^derived[i];
        }
        if(x == derived[n-1])
        return true;
        
        return false;
    }
