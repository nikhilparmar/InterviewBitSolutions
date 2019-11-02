
int Solution::sqrt(int A) 
{
    long long int start=1,end=A/2;
    long long int ans=0;
    if(A==1|A==0)
    {
        return A;
    }
    long long int n=A;
    while(start<=end)
    {
        
        long long int mid=start + (end - start)/2;
        long long int midsqr=mid*mid;            
        if(midsqr==n)
        {
            return mid;
        }
        
        if(midsqr<n)
        {
            start=mid+1;
            ans=mid;
        }
        else
        {
            end=mid-1;
        }
    }
    return ans;
}
