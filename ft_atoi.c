/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldu-pree <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 11:46:33 by ldu-pree          #+#    #+#             */
/*   Updated: 2019/05/23 17:21:51 by ldu-pree         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
int		ft_atoi(const char *str)
{
	int neg;
	int num;
	int i;

	i = 0;
	neg = 1;
	num = 0;
	while (str[i] <= ' ' || str[i] == '\t')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			neg *= -1;
		}
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + (str[i] - 48);
		i++;
	}
	return (num * neg);
}

int main(void){
	
	printf("%d\n", ft_atoi("  "));
	return (0);
}
