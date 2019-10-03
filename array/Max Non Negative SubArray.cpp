unsigned long int maxVecLen=0,maxVecSum=0;
vector<int> finalVec;

int calculateSum(vector<int> &B)
{
    long int n=B.size();
    if(n>0)
    {
        unsigned long long int sum=0;
        for(int i=0;i<n;i++)
        {
            sum=sum+B[i];
        }

        if(sum>maxVecSum)
        {
    
            maxVecSum=sum;
            finalVec=B;
        }
        else 
        if(sum==maxVecSum)
        {
            if(n>maxVecLen)
            {
                maxVecSum=n;
                finalVec=B;
            }
        }
    }
}

vector<int> Solution::maxset(vector<int> &A) 
{
    long int n=A.size();
    vector<int>tempvec,returnVec;
    long int maxtemp=0,max=0;
    long int conti=1;
    
    for(long int i=0;i<n;i++)
    {
        if(A[i]<0)
        {
            calculateSum(tempvec); 
            tempvec.clear();
        }
        else
        {
            tempvec.push_back(A[i]);
        }
    }
    
    calculateSum(tempvec); 
    tempvec.clear();
    maxVecLen=0,maxVecSum=0;
    returnVec=finalVec;
    finalVec.clear();
    
    return returnVec;
}
