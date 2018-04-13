#include<iostream>
#include<vector>
int f(int i,int x);
 const int i=5;
  const int j=5;
  int x=0;
const int n=5;
int matrix [i*j];
int mt(int x);
int main ()
{
  const int i=5;
  const int j=5;
  const int n=5;
  int x=0;

   
  for ( int ii=0; ii<i; ++ii)
    {
      for(int jj=0; jj<j; ++jj)
	{
	  if(ii==jj)
	    {
	      matrix[ii*n+jj]=1;

	    }
	  else
	    {
	      matrix[ii*n+jj]=0;
	    

	    }
	}

 }
  int mt[i*j];
  std::cout<<f(i,x)<<std::endl;
}
int f(int i, int x)
{
  while(x<j)
    {
  for(int ii=0;ii<i;++ii)
    {
      std::cout<<matrix[x*n+ii]<<" ";
    }
  std::cout<<" "<<std::endl;
  return f(i,x+1);
    }
      }
int mt(int x)
{
  for(int ii=0;ii<i;++ii)
    {
      for(int jj=0;jj<j;++jj)
	{
	  matrix[x*ii+jj]=mt[std::abs((x-n))*ii+jj]
	  
