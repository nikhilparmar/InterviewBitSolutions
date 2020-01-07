int compareOperation(string s1, string s2) 
{ 
    
    if((s1.compare(s2)) == 0) 
        return 1;
      
  
    else
        return 0;
} 

string minstring;

string Solution::longestCommonPrefix(vector<string> &A) 
{
    
    int elen=A.size();
  int min=INT_MAX,tmin=0;
  for(int i=0;i<elen;i++)
  {
    string temp=A[i];
    int len=temp.size();
    if(len<min)
    {
      min=len;
      minstring = temp;
    }

  }
  
  int minn=minstring.size();
  int minnDeduct=0;
  string deductString=minstring;
  int iterCount=0;
  string checkStringDeduct;
  int flag=0;
  for(int i=0;i<minn;i++)
  {
    for(int j=0;j<elen;j++)
    {
      string checkString=A[j];
      checkStringDeduct=checkString.substr(0,minn-minnDeduct);
      iterCount+=compareOperation(deductString, checkStringDeduct); 
    }
    
    if(iterCount==elen)
    {
      return checkStringDeduct;
    }
    else
    {
      minnDeduct++;
      deductString.pop_back();
      flag=1;

    }
    iterCount=0;

  }
    

if(flag==1)
{
string temp;
return temp;
}
  
    
}
