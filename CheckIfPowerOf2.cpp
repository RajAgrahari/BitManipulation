// https://leetcode.com/problems/power-of-two/
bool isPowerOfTwo(int n) 
{
        if(n==0)
        return false;
        if(n==(pow(-2,31)))
        return false;
        return ((n&(n-1)) == 0);
}
