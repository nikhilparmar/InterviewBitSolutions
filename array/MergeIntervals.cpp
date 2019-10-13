int flag=0;
bool comp(Interval a, Interval b) 
{ 
    if (a.start != b.start ) 
        return a.start < b.start; 
    
    if (a.start == b.start ) 
    {
        if (a.end != b.end ) 
            return a.end < b.end; 
    }
} 
Interval mergee(Interval ttemp,Interval prev)
{
    if(ttemp.start<=prev.end)
    {
        flag=1;
        Interval mergedtemp;
        mergedtemp.start=prev.start;
        
        if(ttemp.end<=prev.end)
        {
            mergedtemp.end=prev.end;
        }
        else
        {
            mergedtemp.end=ttemp.end;
        }
        
        
        return mergedtemp;
    }
    return ttemp;
}
vector<Interval> Solution::insert(vector<Interval> &intervals, Interval newInterval) 
{
    
   
   Interval newnew=newInterval;
   vector<Interval> B=intervals,final;
 
   stack<Interval> mystack;
   B.push_back(newnew);
   int n=B.size();
   sort(B.begin(),B.end(),comp);
   mystack.push(B[0]);

  for(int i=1;i<n;i++)
  {
        Interval temp=B[i];
        Interval stacktop=mystack.top();
        Interval mergedtemp=mergee(temp,stacktop);
        if(flag==1)
        {
            mystack.pop();
            mystack.push(mergedtemp);
            flag=0;
        }
        else
        {
            mystack.push(mergedtemp);
            
        }
  }
  
  
  vector<Interval> C;
  
  while(!mystack.empty())
  {
      Interval st=mystack.top();
      C.push_back(st);
      mystack.pop();
  }
  
  reverse(C.begin(),C.end());

  return C;
}
