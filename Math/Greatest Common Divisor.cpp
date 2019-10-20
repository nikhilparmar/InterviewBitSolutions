int Solution::gcd(int A, int B) 
{ 
    if(A<B)
    {
        swap(A,B);
    }
    if(B==0)
    {
        return A;
    }
    
    return gcd(A%B,B);
}
