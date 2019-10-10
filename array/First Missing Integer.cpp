int Solution::firstMissingPositive(vector<int> &A) 
{
    int n=A.size();
    
    for(int i=0;i<n;i++)
    {
        if(A[i]>0 && A[i]<n)
        {
            int pos=A[i]-1;
            
            if(A[pos]!=A[i])
            {
                swap(A[pos],A[i]);
                i--;
            }
        }
    }
    
    for(int i=1;i<n;i++)
    {
        if(A[i]!=i)
        {
            return i;
        }
    }
    return n+1;
}
