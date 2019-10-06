vector<int> Solution::wave(vector<int> &A) 
{
    sort(A.begin(),A.end());
    int n=A.size();
    
    if(n%2!=0)
    {
        n=n-1;
    }
    for(int i=0;i<n;i=i+2)
    {
        int temp=A[i];
        A[i]=A[i+1];
        A[i+1]=temp;
    }
    
    return A;
}
