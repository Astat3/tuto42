/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi_exo.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agallot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 11:08:11 by agallot           #+#    #+#             */
/*   Updated: 2025/09/18 10:00:18 by agallot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
int atoi(char *src)
{
	int number;
	int sign;
	int	i;

	number = sign = 0;
	i = 0;
	while((src[i]>= 9 && src[i] <=13 )|| src[i] == 32)
			i++;
	while(src[i] == '-' || src[i] == '+')
	{
		if (src[i] == '-')
		{
			sign++;
		}
		i++;
	}
	while(src[i] >= '0' && src[i] <= '9')
	{
		number *= 10;
		number += src[i] - 48;
		i++;
	}
	
	if (sign % 2 != 0)
	{
	return -number;
	}
return number;	
}
int main(void)
{
	printf("%d", atoi("+---1245"));
}
