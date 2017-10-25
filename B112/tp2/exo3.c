#include <stdio.h>
#include <stdlib.h>

int i;
// inserer fonctions

int main() {
  int x;
  int * p;
  x = 3;
  i = 2;
  
  //1
  //alloc1(p); //legal and safe

  //2
  //p = alloc2();
  
  void alloc3( int ** p )
  {
    *p = (int * )malloc( sizeof(int) );
  }
  
  return 0;
}