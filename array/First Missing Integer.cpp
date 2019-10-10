int Solution::firstMissingPositive(vector<int> &A) 
{
    int n=A.size();
    int posn=0;
    int tempmin=INT_MAX,min=0;
    sort(A.begin(),A.end());
    int index=0;
    for(int i=0;i<n;i++)
    {
        if(A[i]>0)
        {
            posn++;
            break;
        }
        else
        {
            index++;
        }
    }

    int  totalpos=0;
    totalpos=n-index;
    int temp=1;

    int flag=1;

        if(A[index]!=1)
        {
            return 1;
        }
        else
        {
            for(int j=index+1;j<n;j++)
            {
                temp++;
                if(A[j]!=temp)
                {
                    return temp;
                }
                else
                {
                    flag++;
                }

            }
        }
    if(flag==temp)
    {
        return (A[n-1]+1);
    }
}
