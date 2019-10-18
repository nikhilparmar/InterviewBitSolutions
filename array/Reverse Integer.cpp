int Solution::reverse(int A) 
{
    int neg=1;
    long long int n=A;
    if(A<0)
    {
        neg=-1;
        n=A*-1;
    }
    
    long long int rev=0;

    while(n>0)
    {
        rev=rev*10+n%10;
        n=n/10;
    }
    
    long long int res=rev*neg;

    if(res>INT_MAX || res<INT_MIN)
    {
        return 0;
    }
    return res;
}
