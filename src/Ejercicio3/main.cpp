#include<iostream>
#include<list>
#include <algorithm>

using namespace std;

int main ()
{
  int a[4]={3,8,54,7};
  int b[4]={45,35,6,15};

  list<int> al(a,a+4);
  list<int> bl(b,b+4);

  //Generando un array con las listas como se indica 
  int c[8];
  merge(al.begin(),al.end(),bl.begin(),bl.end(),c);

  //Sort
  sort(c,c+8);
  
  //busqueda binaria 
  if(binary_search(c,c+8,55)) cout<<"El número se encontro ";
  cout<<"No se encontro";

  //lowerbound
  auto l=lower_bound (c,c+8, *max_element(c,c+8));
  
}
