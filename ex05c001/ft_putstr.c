/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agallot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 14:30:58 by agallot           #+#    #+#             */
/*   Updated: 2025/09/11 14:54:28 by agallot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
#include <unistd.h>

typedef char *string;

void	ft_putstr(char *str)
{
	int count; 

	count = 0;
	while(str[count] != '\0')
	{
		count++;
	}

	write(1, str, count);
}


int main(void)
{
	string *s = "Bonjour";
	ft_putstr(s);
}
