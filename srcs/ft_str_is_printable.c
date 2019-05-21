/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldu-pree <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 12:53:51 by ldu-pree          #+#    #+#             */
/*   Updated: 2019/05/21 12:55:43 by ldu-pree         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_printable(char *str)
{
	if (!*str)
		return (1);
	while (*str)
	{
		if (!(*str >= 32 && *str <= 127))
			return (0);
		str++;
	}
}