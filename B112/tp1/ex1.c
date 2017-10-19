int somme(int n)
{
	if(n<=0) return 0;
	return n + somme(n-1);
}

int produit(int a, int b)
{
	if(a<=0) return 0;
	return b + produit (a-1, b);
}
