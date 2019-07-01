/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldu-pree <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 11:11:33 by ldu-pree          #+#    #+#             */
/*   Updated: 2019/07/01 15:11:36 by ldu-pree         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	whitespacestart(char const *s)
{
	int c;

	c = 0;
	while (ft_is_whitespace(s[c]))
		c++;
	return (c);
}

char		*ft_strtrim(char const *s)
{
	char	*ns;
	int		i;
	int		l;
	int		x;

	i = 0;
	x = 0;
	if (s == NULL)
		return (NULL);
	l = (int)ft_strlen(s) - 1;
	i = whitespacestart(s);
	if (s[i] == '\0')
		return (ft_strdup(""));
	while (ft_is_whitespace(s[l]))
		l--;
	if (!(ns = (char *)malloc(sizeof(char) * (l - i) + 2)))
		return (NULL);
	while (i <= l)
		ns[x++] = s[i++];
	ns[x] = '\0';
	return (ns);
}
