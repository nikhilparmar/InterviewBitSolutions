// https://javabypatel.blogspot.com/2017/05/count-trailing-zeros-in-factorial-of-number.html
int Solution::trailingZeroes(int A) 
{
    int n=A;
    int count =0;
    for(int i=5;n/i>=1;i*=5)
    {
        count+=n/i;
    }
    
    return count;

}
