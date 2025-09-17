/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agallot <agallot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 04:30:10 by agallot           #+#    #+#             */
/*   Updated: 2025/09/17 04:43:39 by agallot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"

int ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index > 1)
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	return (index);
}

int main()
{
	printf("%d\n", ft_fibonacci(3));
	return (0);
}