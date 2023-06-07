//https://leetcode.com/problems/minimum-flips-to-make-a-or-b-equal-to-c/description/
int minFlips(int a, int b, int c) 
    {
        int cnt=0;
        for(int i=0;i<30;i++)
        {
            if(c&(1<<i))
            {
                if((a&(1<<i)) || (b&(1<<i)))
                continue;
                else
                cnt++;
            }
            else{
                if(a&(1<<i))
                cnt++;
                if(b&(1<<i))
                cnt++;
            }
        }
        return cnt;
    }
