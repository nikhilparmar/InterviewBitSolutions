int Solution::maxArr(vector<int> &A) 
{
    int n=A.size();
    vector<int> myvec;
    int temp=0;
    vector<int> aplusi,aminusi;
    for(int i=0;i<n;i++)
    {
        aplusi.push_back(A[i]+i);
        aminusi.push_back(A[i]-i);
    }
    
    int max1,min1,max2,min2;
    min1=*min_element(aplusi.begin(), aplusi.end());
    max1=*max_element(aplusi.begin(), aplusi.end());
    
    min2=*min_element(aminusi.begin(), aminusi.end());
    max2=*max_element(aminusi.begin(), aminusi.end());
    
    int maxi=max(max1-min1,max2-min2);
 return maxi;   
}
