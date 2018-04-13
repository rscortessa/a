#include<iostream>

int main ()
{
  int f=10;
  int * puntero=nullptr;
  puntero=&f;
  std::cout<<f<<std::endl;
  std::cout<<puntero<<std::endl;
  std::cout<<*puntero<<std::endl;

  *puntero=0;
  std::cout<<f<<std::endl;
  return 0;
}

