vector<int> Solution::plusOne(vector<int> &A) 
{
    int n=A.size();
    int carry=0;
    int last=A[n-1]+1;
    if(last>9)
    {
        A[n-1]=0;
        carry=1;
    }
    else
    {
        A[n-1]=A[n-1]+1;
    }
    for(int i=n-2;i>=0;i--)
    {
        if(carry==1)
        {
            A[i]=A[i]+1;
            if(A[i]>9)
            {
                A[i]=0;
                carry==1;
            }
            else
            {
                carry=0;
            }
        }
    }
    if(carry==1)
    {
        A.insert(A.begin(),1);
        carry=0;
    }
    
    
    vector<int>::iterator it1,it2; 
  
    it1 = A.begin(); 

    while(A[0]==0)
    {
        A.erase(it1);
        it1 = A.begin(); 
    }
   
    return A;
}
