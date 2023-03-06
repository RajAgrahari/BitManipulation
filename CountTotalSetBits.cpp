// https://practice.geeksforgeeks.org/problems/count-total-set-bits-1587115620/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=Count+total+set+bits
int countSetBits(int n)
{
     if(n < 2) 
     return n;
     int x = log2(n);
     int ans = x * pow(2, x-1);
     ans += n - pow(2, x) + 1;
     ans += countSetBits(n - pow(2, x));
     return ans;
}
