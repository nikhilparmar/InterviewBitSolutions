int Solution::isPalindrome(int A) 
{
    int rev=0;
    int n=A;
    while(n>0)
    {
        rev=rev*10+n%10;
        n=n/10;
    }
    
    if(rev==A)
    {
        return 1;
    }
    
    return 0;
}
