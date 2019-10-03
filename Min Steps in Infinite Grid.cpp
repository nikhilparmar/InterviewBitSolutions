int dist(int x1,int y1,int x2,int y2)
    {
        return max(abs(x1-x2),abs(y1-y2));
    }

int Solution::coverPoints(vector<int> &A, vector<int> &B) {
    if(A.size()==1 && B.size()==1)
    {
        return 0;
    }
    
    int n=A.size();
    
    
    int distance=0;
    for(int i=0;i<n-1;i++)
    {
        int x1=A[i];
        int y1=B[i];
        
        int x2=A[i+1];
        int y2=B[i+1];
        
        distance=distance+dist(x1,y1,x2,y2);
    }
    
    return distance;
}
