void up(int &i,int &j,int &value,vector< vector<int> > &matrix,int &count);
void left(int &i,int &j,int &value,vector< vector<int> > &matrix,int &count);
void down(int &i,int &j,int &value,vector< vector<int> > &matrix,int &count);
void right(int &i,int &j,int &value,vector< vector<int> > &matrix,int &count);


void up(int &i,int &j,int &value,vector< vector<int> > &matrix,int &count)
    {
        if(count>0)
        {
            for(int x=count;x>0;x--)
            {
              matrix[i][j]=value;
              value++;
              i--;
            }
            i++;
            j++;

            right(i,j,value,matrix,count);
            
        }
    }
void left(int &i,int &j,int &value,vector< vector<int> > &matrix,int &count)
    {
        if(count>0)
        {
            for(int x=count;x>0;x--)
            {
              matrix[i][j]=value;
              value++;
              j--;
            }
            count--;
            j++;
            i--;
            up(i,j,value,matrix,count);
            
        }
    }

void down(int &i,int &j,int &value,vector< vector<int> > &matrix,int &count)
    {
        if(count>0)
        {
            for(int x=0;x<count;x++)
            {
               matrix[i][j]=value;
               value++;
               i++;
            }
            i--;
            j--;

           left(i,j,value,matrix,count);
            
        }
    }
    
    
void right(int &i,int &j,int &value,vector< vector<int> > &matrix,int &count)
    {
        if(count>0)
        {
            for(int x=0;x<count;x++)
            {
               matrix[i][j]=value;
               value++;
               j++;
            }
            count--;
            i++;
            j--;
            
            down(i,j,value,matrix,count);
        }
    }

    
vector<vector<int> > Solution::generateMatrix(int A) 
{
    vector< vector<int> > matrix(A,vector<int>(A,0));
    int n=A*A;
    int value=1;
    int i=0,j=0;
    int count=A;
    right(i,j,value,matrix,count);

    return matrix;
}
