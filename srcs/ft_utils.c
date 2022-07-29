/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdkhissi <mdkhissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 19:20:30 by mdkhissi          #+#    #+#             */
/*   Updated: 2022/07/29 12:30:13 by mdkhissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_putnstrfree(char **str, int n)
{
	int		i;
	char	*s;

	s = *str;
	i = 0;
	if (s)
	{
		if (n == -1)
		{
			while (s[i])
			{
				write(1, &(s[i]), 1);
				i++;
			}
		}
		else
		{
			while (i < n)
			{
				write(1, &(s[i]), 1);
				i++;
			}
		}
		free(*str);
	}
}

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	else
		return (c);
}

char	*str_capitalize(char *str)
{
	int	i;

	i = 0;
	if (str)
	{
		while (str[i])
		{
			str[i] = ft_toupper(str[i]);
			i++;
		}
	}
	return (str);
}

bool	ft_isdigit(const char c)
{
	return (c >= '0' && c <= '9');
}
