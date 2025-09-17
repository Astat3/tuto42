/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agallot <agallot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 03:15:22 by agallot           #+#    #+#             */
/*   Updated: 2025/09/17 03:30:43 by agallot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"

int ft_recursive_factorial(int nb)
{
	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	if (nb > 1)
		nb = nb * ft_recursive_factorial(nb - 1);
	return (nb);
}

int main()
{
	printf("%d\n", ft_recursive_factorial(-3423));
	return (0);
}