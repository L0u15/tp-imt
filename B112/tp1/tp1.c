#include <stdio.h>
#include "tp1.h"
int somme(int n)
{
	if(n<=0) return 0;
	return n + somme(n-1);
}

int produit(int a, int b)
{
	if(a<=0) return 0;
	return b + produit(a-1, b);
}
void afficheBin(int n)
{
  if(n!=0)
  {
  afficheBin(n/2);
  }
}
void remplissage(char image[HAUTEUR][LARGEUR], int i, int j, char couleur)
{
 if(i<HAUTEUR && i>=0 && j<LARGEUR && j>=0)
 {
   if(image[i][j]==' ')
   {
    image[i][j]=couleur;
    remplissage(image, i+1, j, couleur);
    remplissage(image, i+1, j+1, couleur);
    remplissage(image, i+1, j-1, couleur);
    remplissage(image, i, j+1, couleur);
    remplissage(image, i, j-1, couleur);
    remplissage(image, i-1, j+1, couleur);
    remplissage(image, i-1, j, couleur);
    remplissage(image, i-1, j-1, couleur);
   }
 }
}
void afficheImage(char image[HAUTEUR][LARGEUR])
{
 int x, y;
 for(x=0;x<HAUTEUR;x++)
 {
   printf("|");
   for(y=0;y<LARGEUR;y++)
   {
     printf(" %c |",image[x][y]);
   }
   printf("\n");
 }
}

//ex4
int occurrences(char *ch, char c)
{
 if(*ch=='\0') return 0;
 if(*ch==c) return 1+occurrences(ch+1, c);
 return occurrences(ch+1, c);
}