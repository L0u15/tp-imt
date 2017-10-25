#include "tp2.h"
#include <stdlib.h>

int x;
int main()
{
  int y = 2;
  int *p;
  x = 1;
  
  //1.
  //p=7; // warning: assignment makes pointer from integer without a cast [enabled by default]
  
  //2.
  //*p=7; // legal but not safe : Segmentation fault
  
  //3.
  //p = &y; // legal and safe
  //*p = 7; // legal and safe
  
  //4.
  /*p = &x; // legal and safe
  *p = 7;
  p = &y;
  *p = 3;*/
  
  //5.
  //*y = *p; // illegal
  
  //6.
  //x = *p; // legal but not safe : Segmentation fault
  
  //7.
  //p = (int *)malloc( sizeof( int ) ); //legal and safe
  //*p = 3;
  
  //8.
  //p = (int *)malloc( sizeof( int ) );
  //free( p );
  //*p = 3; // legal but not safe
  
  //9.
  //p = (int *)malloc( sizeof( int ) );
  //*p = y;
  //free( p ); // legal and safe
  
  //10.
  //p = (int)malloc( sizeof( int ) ); // illegal
  //*p = y;
  //free( p ); 
  
  //11.
  //p = (int *)malloc( sizeof( y ) ); // legal
  //*p = y;
  //free( p );
  
  //12.
  p = (int *)malloc( 8 ); // legal
  *p = 3;
  free( p );
  
  return 0;
}
