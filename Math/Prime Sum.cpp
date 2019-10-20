int checkIfPrime(int a)
{
    int flag=1;
    for(int i=2;i<=sqrt(a);i++)
    {
        if(a%i==0)
        {
            return 0;
        }
    }
    return 1;
}
int checkForSolution(int i,int A)
{
    int diff=A-i;
    int flag=checkIfPrime(diff);
    if(flag==1)
    {
        return diff;
    }
    return 0;
}


vector<int> Solution::primesum(int A) 
{
    int squareroot=sqrt(A);
    int diff=0,flag=0;
    vector<int> vec(2);
    
    for(int i=2;i<=A;i++)
    {
        int x =checkIfPrime(i);
        if(x==1)
        {
            diff=checkForSolution(i,A);
            if(diff!=0)
            {
                vec[0]=i;
                vec[1]=diff;
                break;
            }
        }
        
    }
    
    return vec;
    
}
