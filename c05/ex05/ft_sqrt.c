/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agallot <agallot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 04:44:28 by agallot           #+#    #+#             */
/*   Updated: 2025/09/17 15:10:36 by agallot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"

int ft_sqrt(int nb)
{
    int	i;

	if (nb <= 0)
		return (0);
	i = 0;
	while(i* i <= nb)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}

int main()
{
	printf("%d\n", ft_sqrt(29));
	return (0);
}
