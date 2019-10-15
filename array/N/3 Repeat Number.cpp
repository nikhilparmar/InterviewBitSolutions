int Solution::repeatedNumber(const vector<int> &A) 
{
    int n=A.size();
    int one=INT_MAX, two=INT_MAX, count1=0,count2=0;

    for(int i=0;i<n;i++)
    {
        if(one==A[i])
        {
            count1++;
        }else
        if(two==A[i])
        {
            count2++;
        }else
        if(count1==0)
        {
            one=A[i];
            count1=1;
        }else
        if(count2==0)
        {
            two=A[i];
            count2=1;
        }
        else
        {
            count1--;
            count2--;
        }
    }

    int tempCount1=0,tempCount2=0;
    double div=n/3;
    for(int j=0;j<n;j++)
    {
        if(one==A[j])
        {
            tempCount1++;
        }

    }

    for(int j=0;j<n;j++)
    {
        if(two==A[j])
        {
            tempCount2++;
        }

    }

    if(tempCount1>div)
    {
        return one;
    }else
    if(tempCount2>div)
    {
        return two;
    }else
    {
        return -1;
    }


return 0;

} 
