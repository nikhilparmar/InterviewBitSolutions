int Solution::trap(const vector<int> &A) 
{
    int n=A.size();
    stack<int> leftStack,rightStack;
    vector<int> left(n),right(n);
    
    // traversing right
    leftStack.push(A[0]);
    left[0]=A[0];
    for(int i=1;i<n;i++)
    {
        if(leftStack.top()<A[i])
        {
            left[i]=A[i];
            leftStack.pop();
            leftStack.push(A[i]);
        }
        else
        {
            left[i]=leftStack.top();
        }
    }
    
    rightStack.push(A[n-1]);
    right[n-1]=A[n-1];
    for(int i=n-2;i>=0;i--)
    {
        if(rightStack.top()<A[i])
        {
            right[i]=A[i];
            rightStack.pop();
            rightStack.push(A[i]);
        }
        else
        {
            right[i]=rightStack.top();
        }
    }
    int result=0;
    for(int i=0;i<n;i++)
    {
        result=result+(min(left[i],right[i])-A[i]);
    }
    return result;
}
