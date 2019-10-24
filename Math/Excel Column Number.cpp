int Solution::titleToNumber(string A) 
{
    int n=A.size();
    int total=0;
    reverse(A.begin(),A.end());
    
    for(int i=n-1;i>=0;i--)
    {
        int coef=A[i]-'A'+1;
        total=total+pow(26,i)*coef;
    }
    return total;
}
