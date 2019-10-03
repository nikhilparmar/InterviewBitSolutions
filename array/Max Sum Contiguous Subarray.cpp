int Solution::maxSubArray(const vector<int> &A) 
{
    int n=A.size();
    if(n==1)
    {
        return A[0];
    }
    int maxsum=A[0];
    int tempsum=A[0];
    for(int i=1;i<n;i++)
    {
        tempsum=max(A[i],tempsum+A[i]);
        
        if(tempsum>maxsum)
        {
            maxsum=tempsum;
        }
        
    }
    return maxsum;
}
