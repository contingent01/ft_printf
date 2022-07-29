/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_sfprintf.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdkhissi <mdkhissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 12:54:03 by mdkhissi          #+#    #+#             */
/*   Updated: 2022/07/29 16:07:42 by mdkhissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

#include <stdio.h>

int	main(int ac, char **av)
{
	char *s;

	ft_printf(&s, 1, "ok %#X %s", 12, "test", "gg");
	printf("\n|%s|\n", s);
}