/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldu-pree <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 12:53:51 by ldu-pree          #+#    #+#             */
/*   Updated: 2019/05/21 17:04:38 by ldu-pree         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isprint(char c)
{
	if (!(c >= ' ' && c <= '~'))
		return (0);
	else
		return (1);
}
