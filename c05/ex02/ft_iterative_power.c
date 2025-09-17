/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agallot <agallot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 03:31:25 by agallot           #+#    #+#             */
/*   Updated: 2025/09/17 04:29:45 by agallot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"

int ft_iterative_power(int nb, int power)
{
	int i;
	int	p;

	i = 0;
	p = nb;
	if (nb == 0 && power == 0)
		return (1);
	if (power == 0)
		return (1);
	if (nb < 0 || power < 0)
		return (0);
	while(i < power - 1)
	{
		nb = p * nb;
		i++;
	}
	return (nb);
}

int main()
{
	printf("%d\n", ft_iterative_power(4, 3));
	return (0);
}