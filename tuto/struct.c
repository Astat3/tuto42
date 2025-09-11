#include <unistd.h>


typedef struct
{
	char	name;
	char	num;

}person;/*nom de la struct*/

void ft_putchar(char c)
{
	write(1, &c, 1);
}


int main(void)
{
	person people; /*declaration de la struct*/	
	people.name = 'a'; /*assignation*/
	people.num = '5';
	ft_putchar(people.num); /*Affichage de la struct*/
	return 0;
	
}
