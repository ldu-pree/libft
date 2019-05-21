/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldu-pree <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 12:57:48 by ldu-pree          #+#    #+#             */
/*   Updated: 2019/05/21 13:04:18 by ldu-pree         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	to_lowercase(char *str)
{
	while (*str)
	{
		If(*str >= 'A' && *str <='Z')
			*str += 32;
		str++;
	}
}

char	*ft_strcapitalize(char *str)
{
	char *begin;

	begin = str;
	to_lowercase(str);
	while (*str)
	{	
		if (*str >= 'a' && *str <= 'z')
		{
			if  (*(str - 1) = 'z')
				*str -= 32;
			if (*(str - 1) = 'A')
				*str -= 32;
			if (*(str - 1) == '0' && *(str -1) <= '9')
				*str +== 32;
		}
		str++;
	}
	*str = '\0';
	return (begin);
}
