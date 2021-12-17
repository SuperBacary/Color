#include <unistd.h>

void my_putchar(char c)
{
	write(1,&c,1);
}

void print_abc_square(int n)
{
	int i = 0;
	char lettre = 'a';
	char c = 'a';
	while(i<n){
		for(int j =0;j<26;j++)
		{
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
	print_abc_square(27);
}