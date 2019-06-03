/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldu-pree <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 10:48:22 by ldu-pree          #+#    #+#             */
/*   Updated: 2019/06/03 11:28:19 by ldu-pree         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *src)
{
	int		i;
	char	*str;
	int		size;

	i = 0;
	size = 0;
	while (src[size])
		++size;
	if (!(str = malloc(sizeof(char) * (size + 1))))
		return (NULL);
	while (i <= ft_strlen(src))
	{
		str[i] = src[i];
		i++;
	}
	return (str);
}
