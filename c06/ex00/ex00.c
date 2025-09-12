/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex00.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agallot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 21:43:42 by agallot           #+#    #+#             */
/*   Updated: 2025/09/12 21:57:42 by agallot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{

	write(1, &c, 1);
}

int main(int argc, char *argv[])
{ 
	int	i;

	i = 0;
	while (argv[0][i])
	{
	ft_putchar(argv[0][i]);
	i++;
	}
	return 0;
	 
}
