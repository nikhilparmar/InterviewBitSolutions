void Solution::rotate(vector<vector<int> > &A) 
{
    // vector<vector<int> > B=A;
    // int temp=0;
    // int n=A.size();
    // int ii=n-1;
    // int jj=0;
    // for(int i=0;i<n;i++)
    // {
    //     for(int j=0;j<n;j++)
    //     {
    //         // swap(A[i][j],A[ii][jj]);
    //         A[i][j]=B[ii][jj];
    //         ii--;
    //     }
    //     ii=n-1;
    //     jj++;
    // }
    
     
    // INPLACE --> http://theoryofprogramming.com/2017/12/31/rotate-matrix-clockwise/#comment-32256 
    int n=A.size();
    
    for(int c=0;c<n/2;c++)
    {
        int l=n-1-c;
        for(int i=0;i<l-c;i++)
        {
            int temp=A[c][c+i];
            A[c][c+i]=A[l-i][c];
            A[l-i][c]=A[l][l-i];
            A[l][l-i]=A[c+i][l];
            A[c+i][l]=temp;
            
        }
    }
    
    // return A;

}
