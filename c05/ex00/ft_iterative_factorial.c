/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agallot <agallot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 02:57:36 by agallot           #+#    #+#             */
/*   Updated: 2025/09/17 03:13:02 by agallot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"

int ft_iterative_factorial(int nb)
{
    int	i;
	int	res;

	i = 0;
	res = 1;
	if (nb < 0)	
		return (0);
	while(++i < nb)
		res *= i + 1;
	return (res);
}


int main()
{
	printf("%d\n", ft_iterative_factorial(9999999));
	return(0);
}