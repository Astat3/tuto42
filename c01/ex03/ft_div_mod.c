/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_div_mod.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agallot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 12:41:08 by agallot           #+#    #+#             */
/*   Updated: 2025/09/11 19:49:39 by agallot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int main(void)
{
	int	a;
	int	b;
	int	*div;
	int *mod;

	a = 10;
	b = 5;
	div = &a;
	mod = &b;
	ft_div_mod(a,b,div,mod);
	printf("div = %d\nmod = %d\n", *div, *mod);

}*/
