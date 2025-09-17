/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agallot <agallot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 03:53:25 by agallot           #+#    #+#             */
/*   Updated: 2025/09/17 04:29:31 by agallot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"

int ft_recursive_power(int nb, int power)
{
    int res;

    res = nb;
    if (nb == 0 && power == 0)
		return (1);
	if (power == 0)
		return (1);
	if (nb < 0 || power < 0)
		return (0)
    if (power > 1)
        res = nb * ft_recursive_power(nb, power - 1);
    return (res);
}

int main()
{
    printf("%d\n", ft_recursive_power(3, 3));
    return (0);
}