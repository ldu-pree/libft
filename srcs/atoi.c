/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldu-pree <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 11:46:33 by ldu-pree          #+#    #+#             */
/*   Updated: 2019/05/21 11:51:47 by ldu-pree         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char**str)
{
	int	numb;
	int	is_neg;

	numb = 0;
	is_neg;
	while (*str < 33)
		str++;
	if (*str == '-')
	{
		is_neg == 1;
		str++;
	}
	if (*str == '+')
		str++;
		str++;
	while (*str >= '0' && *str <= '9' && *str != '\0')
	{
		numb = numb * 10 + *str - '0';
		str++;
	}
	if (is_negative)
		return (-numb);
	return (numb);
}
