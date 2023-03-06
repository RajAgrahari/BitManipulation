// https://practice.geeksforgeeks.org/problems/check-whether-k-th-bit-is-set-or-not-1587115620/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=Check+whether+K-th+bit+is+set+or+not
bool checkKthBit(int n, int k)
{
     if((1&(n>>k)) == 1)
     return true;
     else
     return false;
}
