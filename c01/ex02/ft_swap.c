/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agallot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 12:07:01 by agallot           #+#    #+#             */
/*   Updated: 2025/09/11 19:52:10 by agallot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*int main (void)
{
	int x = 10;
	int y = 5;
	int *a;
	int	*b;

	a =&x;
	b= &y;
	printf("Before: a= %d, b = %d\n", x,y);
	ft_swap(a,b);
	printf("After: a = %d, b = %d \n",x ,y);

}*/
