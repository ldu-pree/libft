/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldu-pree <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 10:48:22 by ldu-pree          #+#    #+#             */
/*   Updated: 2019/05/23 11:36:55 by ldu-pree         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*str;

	str = (char*)malloc(sizeof(*str) * (ft_strlen(src) + 1));
	i = 0;
	while (i <= ft_strlen(src))
	{
		str[i] = src[i];
		i++;
	}
	return (str);
}
