int Solution::maxSpecialProduct(vector<int> &A) 
{
    
    int n=A.size();
    int result=0;
    for(int i=n-1;i>=0;i--)
    {
        int left=0,right=0,leftIndex=0,rightIndex=0;
        int leftFlag=0,rightFlag=0;
        for(int r=i+1;r<n;r++)
        {
            if(A[i]<A[r])
            {
                right=A[r];
                rightIndex=r;
                rightFlag=1;
                break;
            }
        }
        
        for(int l=i-1;l>=0;l--)
        {
            if(A[i]<A[l])
            {
                left=A[l];
                leftIndex=l;
                leftFlag=1;
                break;
            }
        }
    int prod=rightIndex*rightFlag*leftIndex*leftFlag;
    int tempresult=prod%1000000007;
    result=max(result,tempresult);
    }
    
    return result;
}
