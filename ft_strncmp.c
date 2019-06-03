/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldu-pree <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 08:44:59 by ldu-pree          #+#    #+#             */
/*   Updated: 2019/06/03 11:29:14 by ldu-pree         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int i;

	i = 0;
	while (*s1 && *s1 == *s2 && i < n - 1 && *s1 != '\0' && *s2 != '\0')
	{
		s1++;
		i++;
		s2++;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}
