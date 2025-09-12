/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agallot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 13:55:03 by agallot           #+#    #+#             */
/*   Updated: 2025/09/11 19:47:57 by agallot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = temp / *b;
	*b = temp % *b;
}

/*int main(void){

	int	x,y;
	int *a,*b;
	
	x = 10;
	y = 5;
	a = &x;
	b = &y;

	ft_ultimate_div_mod(a,b);
	printf("Reste:%d\nMod: %d\n", x, y);
	}*/
