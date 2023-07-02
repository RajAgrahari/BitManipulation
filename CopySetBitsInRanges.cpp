//https://practice.geeksforgeeks.org/problems/copy-set-bits-in-range0623/1
int setSetBit(int x, int y, int l, int r){
        for(int i=l-1;i<r;i++)
        {
            if(y&(1<<i))
            x |= (1<<i);
        }
        return x;
    }
