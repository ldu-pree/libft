/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_uppercase.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldu-pree <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 12:56:04 by ldu-pree          #+#    #+#             */
/*   Updated: 2019/05/21 12:57:23 by ldu-pree         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_uppercase(char *str)
{
	if (!*str)
		return(1);
	while (*str)
	{
		if(!(*str >='A' && *str <= 'Z'))
			return(0);
		str++;
	}
}
