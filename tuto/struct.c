#include <unistd.h>


typedef struct
{
	char	name;
	char	num;

}person;

void ft_putchar(char c)
{
	write(1, &c, 1);
}


int main(void)
{
	person people;	
	people.name = 'a';
	people.num = '5';
	ft_putchar(people.num);
	return 0;
	
}
