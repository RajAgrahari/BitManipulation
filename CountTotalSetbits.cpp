//https://practice.geeksforgeeks.org/problems/1132bd8ee92072cd31441858402641d6800fa6b3/1
int countbits(long long int n)
    {
      if(n<=0)
      return 0;
      if(n==1)
      return 1;
     long long int x=n;
     long long int i=0;
        while(pow(2,i)<=x)
        i++;
            
    i-=1;
    return(pow(2,i-1)*i)+(n-pow(2,i)+1)+countbits(n-pow(2,i));
  }
    long long countBits(long long N) {
        long long ans=countbits(N);
        return ans;
    }
