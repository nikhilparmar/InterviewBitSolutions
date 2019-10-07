int Solution::repeatedNumber(const vector<int> &A) 
{
   int n=A.size();
   int xor1=0;
  
   for(int i=1;i<n;i++)
   {
       xor1=xor1^A[i];
       xor1=xor1^i;
   }
   
   xor1=xor1^A[0];
   
   return xor1;
}
