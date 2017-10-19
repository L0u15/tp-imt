#define HAUTEUR 10
#define LARGEUR 10

int somme(int n);
int produit(int a, int b);

void afficheBin(int n);


void remplissage(char image[HAUTEUR][LARGEUR], int i, int j, char couleur);
void afficheImage(char image[HAUTEUR][LARGEUR]);

int occurrences(char *ch, char c);
int occurrences_bigramme(char *ch, char c1, char c2);
int absent(char *ch, char c);
void remplace(char *ch, char c1, char c2);