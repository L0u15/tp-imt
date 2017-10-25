#include <stdio.h>
#include <stdlib.h>
struct Comp {
  int k;
  double n;
};
typedef struct Comp * Com;

int main() {
  double *p;
  struct Comp *pe;
  struct Comp e;
  
  //1
  //e.n = *p; // legal and safe
  
  //2
  //pe->n = 1.0; // legal not safe
  
  //3
  //pe = &e;
  //pe->n = 7.0; // legal and safe
  
  //4
  //pe = (struct Comp *)malloc( sizeof(struct Comp) ); //legal and safe
  
  //5
  //pe = (struct Comp *)malloc( sizeof(struct Comp) );
  //pe->n = 7.0; //legal and safe
  
  //6
  //pe = (struct Comp *)malloc( sizeof(struct Comp) );
  //pe->k = 5; //legal and safe
  
  //7
  //free( pe ); //legal not safe : Segmentation fault
  
  //8
  //pe = (struct Comp *)malloc( sizeof(struct Comp) );
  //pe->k = 5;
  //free( pe ); // legal and safe
  
  //9
  //pe = (struct Comp *)malloc( sizeof(struct Comp) );
  //pe = 0; //legal but not safe : tu perds ce que tu avez avant et tu ne sais pas ce qu'il y a à 0
  //free( pe );
  
  //10
  //pe = (struct Comp *)malloc( sizeof(struct Comp) );
  //pe = &e; //legal but not safe : tu libère pe et e
  //free( pe );
  
  //11
  //pe = (Com)malloc( sizeof(struct Comp) );
  //pe->k = 5;
  //free( pe ); //legal and safe
  
  //12
  pe = (Com)malloc( sizeof(Com) );
  pe->k = 5;
  free( pe );
  
  //printf("%d\n", pe->k);
  return 0;
}