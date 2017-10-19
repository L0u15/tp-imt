#include <stdio.h>
#include "tp1.h"

int main()
{
 //ex1
  int myInt;
/*
  printf("Entrez un entier n : ");
  scanf("%d", &myInt);
  printf("Somme des n premier entier : %d\n", somme(myInt));
  int x,y;
  printf("Entrez un premier entier x : ");
  scanf("%d", &x);
  printf("Entrez un deuxième entier y : ");
  scanf("%d", &y);
  printf("Produit de x par y : %d\n", produit(x,y));
*/
 //ex2
 /*
  printf("Entrez un entier n : ");
  scanf("%d", &myInt);
  afficheBin(myInt);
  printf("\n");
  */
 //ex3
 /*
 char image[HAUTEUR][LARGEUR]=
 {
   {' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
   {' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
   {' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
   {' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
   {' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
   {'X','X','X',' ',' ',' ',' ',' ',' ',' '},
   {' ',' ','X',' ',' ',' ',' ',' ',' ',' '},
   {' ',' ','X',' ',' ',' ',' ',' ',' ',' '},
   {' ',' ','X',' ',' ',' ',' ',' ',' ',' '},
   {' ',' ','X',' ',' ',' ',' ',' ',' ',' '}
 };
 afficheImage(image);
 remplissage(image,5,5,'A');
 printf("\n");
 afficheImage(image);
 */
 //ex4
  char string[256];
  char c;
  printf("Entrez une phrase : ");
  gets(string);
  printf("Entrez un char : ");
  scanf("%c", &c);
  printf("Nb occurrences %c dans %s: %d\n",c, string, occurrences(string, c));
}




