vector<vector<int> > Solution::diagonal(vector<vector<int> > &A)
{
    int n=A.size();
    int nn=2*n-1;
    vector<vector<int> > final;
    
    int i=0,j=-1,count=0,flag=0;
    for(int k=0;k<nn;k++)
    {
        if(flag==0 && count<n)
        {
            count++;
            j++;
        } else
        if(flag==0 && count==n)
        {
            count=n-1;
            i++;
            flag=1;
        } else
        if(flag==1 && count<nn)
        {
            count--;
            i++;
        }
        int ii=i;
        int jj=j;
        vector<int> temp;
        for(int l=0;l<count;l++)
        {
            temp.push_back(A[ii][jj]);
            jj--;
            ii++;
        }
        final.push_back(temp);
    }
    
    return final;
}
// Editorial
vector<vector<int> > Solution::diagonal(vector<vector<int> > &A) {
    int n = A.size();
    int N = 2*(n-1) + 1;//number of vectors in ans
    vector<vector<int>> ans(N);
    for(int i = 0;i<n;i++)
    {
        for(int j = 0;j<n;j++)
            ans[i+j].push_back(A[i][j]);//sum of index values in 2d array gives the index in ans
    }
    return ans;
}
