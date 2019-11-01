int numberOfPaths(int m,int n)
{
    if(m==1||n==1)
    {
        return 1;
    }
    
    return numberOfPaths(m-1,n)+numberOfPaths(m,n-1);
}
int Solution::uniquePaths(int A, int B) 
{int result=0;
    result=numberOfPaths( A, B);
    return result;
}
