#include<iostream>
#include<vector>
int f(int i,int x);
 const int i=5;
  const int j=5;
  int x=0;
int matrix [i][j];
int main ()
{
  const int i=5;
  const int j=5;
  int x=0;

   
  for ( int ii=0; ii<i; ++ii)
    {
      for(int jj=0; jj<j; ++jj)
	{
	  if(ii==jj)
	    {
	      matrix[ii][jj]=1;

	    }
	  else
	    {
	      matrix[ii][jj]=0;
	    

	    }
	}

 }
  int mt[i][j];
  mt[i][j]=matrix[j][i];
  std::cout<<f(i,x)<<std::endl;
}
int f(int i, int x)
{
  while(x<j)
    {
  for(int ii=0;ii<i;++ii)
    {
      std::cout<<matrix[x][ii]<<" ";
    }
  std::cout<<" "<<std::endl;
  return f(i,x+1);
    }
      }

