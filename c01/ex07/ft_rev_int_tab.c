/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agallot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 17:12:30 by agallot           #+#    #+#             */
/*   Updated: 2025/09/11 19:01:16 by agallot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	back;

	j = 0;
	i = 0;
	back = size - 1;
	while (i < back)
	{
		j = tab[i];
		tab[i] = tab[back];
		tab[back] = j;
		i++;
		back--;
	}
}

/*int main(void)
{
	int i = 0;	
	int a[5]={1,2,3,4,5};
	int *tab = a;
	
	ft_rev_int_tab(tab,5);
	
	while (i < 5)
	{
		printf("%d",a[i]);
		i++;
	}


}*/
