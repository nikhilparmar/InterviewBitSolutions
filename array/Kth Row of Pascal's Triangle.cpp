vector<int> Solution::getRow(int A) 
{
    vector<vector<int>> a;
    int n=A;
    if(n==0)
    {
        vector<int> temp(1,1);
        return temp;
    }
    if(n>0)
    {
        vector<int> x(1,1);
        a.push_back(x);
        for(int i=1;i<=n;i++)
        {
            a.push_back(vector<int>(i+1,1));
            for(int j=1;j<i;j++)
            {
                int x=i-1;
                int y=j-1;
                a[i][j]=a[x][j]+a[x][y];
            }
        }
        return a[A];
    }
}
