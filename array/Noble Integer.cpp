int Solution::solve(vector<int> &A) 
{
    int n=A.size();
    sort(A.begin(),A.end());
    int index=0;
    int flag=0;
    for(int j=0;j<n-1;j++)
    {
        if(A[j]!=A[j+1])
        {
            int maxi=n-j-1;
            if(A[j]==maxi)
            {
                return 1;
            }
        }
    }
    
    if(A[n-1]==0)
    {
        return 1;
    }
    
    return -1;
}
