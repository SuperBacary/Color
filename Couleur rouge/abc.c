#include <unistd.h>
#include <stdio.h>
void my_putchar(char c) // Permet d'afficher un caractere
{
	write(1,&c,1); 
}




void set_color(char* c) //change la couleur de la police
{
	int i = 0;
	while(c[i]){
		my_putchar(c[i]);
		i++;
	}
}


void print_abc_square(int n) // Initialisation du programme
{
	int i = 0;
	char vert[] = "\033[0;32m"; // VERT
	//char rouge[] = "\033[1;31m"; ROUGE
	//char jaune[] = "\033[0;33m"; JAUNE
	//char bleu[] = "\033[0;34m"; BLEU
	char lettre = 'a';					// Lettre de reference 
	char c = 'a';
	while(i<n){
		for(int j =0;j<26;j++)
		{	
			set_color(vert);
			if(c > 122)
				c = 'a';
			my_putchar(c);
			c++;
		}
		my_putchar(10);
		i++;
		c = lettre + i%26;
	}	
	
}
int main()
{
	print_abc_square(6);


}