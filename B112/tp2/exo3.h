#include <stdio.h>
#include <stdlib.h>

int x;
int * p;

void alloc1( int * p )
{
  p = (int *) malloc( sizeof(int) );
}
int * alloc2()
{
int * p;
  p = (int *) malloc( sizeof( int ) );
  return p;
}
void alloc3( int ** p )
{
  *p = (int * )malloc( sizeof(int) );
}
int * alloc4()
{
  int * p;
  p = (int *)malloc( sizeof(int) );
  return *p;
}
void alloc5()
{
  int * p;
  p = (int *)malloc( sizeof(int) );
}
void inc1( int i )
{
  i = i + 1;
}
void inc2()
{
  i = i + 1;
}
void inc3( int i )
{
  *i = *i + 1;
}
void inc4( int * i )
{
  *i = *i + 1;
}
int * inc5( int i )
{
  int res = i + 1;
  return &res;
}
int * inc6( int i )
{
i= i + 1;
return &i;
}
void free1( int * p )
{
free( p );
p = NULL;
}
void free2( int ** p )
{
free( *p );
*p = NULL;
}
int * free3( int * p )
{
free( p );
return NULL;
}