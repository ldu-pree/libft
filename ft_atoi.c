/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldu-pree <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 11:46:33 by ldu-pree          #+#    #+#             */
/*   Updated: 2019/05/21 16:21:11 by ldu-pree         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int		loop;
	char	zero;
	int		val;

	loop = 0;
	zero = 'p';
	val = 0;
	while (str[loop] == ' ' || str[loop] == '\t')
		loop++;
	if (str[loop] == '-')
		zero = 'n';
	if (str[loop] == '+')
		loop++;
	while (ft_isdigit(str[loop]))
	{
		val *= 10;
		val += (str[loop] - 48);
		loop++;
	}
	return (val);
}
