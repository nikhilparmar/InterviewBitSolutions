int Solution::isPalindrome(int A) 
{
    vector<int> vec;
    
    if(A<0)
    {
        return 0;
    }
    int n=A;
    while(n!=0)
    {
        int d=n%10;
        vec.push_back(d);
        n=n/10;
    }
    
    vector<int> vecy=vec;
    reverse(vec.begin(),vec.end());
    
    if(vec==vecy)
    {
        return 1;
    }
    else
    {
        return 0;
    }

}
