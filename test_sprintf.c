/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_sprintf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdkhissi <mdkhissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 12:54:03 by mdkhissi          #+#    #+#             */
/*   Updated: 2022/07/29 15:30:41 by mdkhissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

#include <stdio.h>

int	main(int ac, char **av)
{
	char *s;

	ft_printf(&s, 1, "ok %x %s", 1333, "test", "gg");
	printf("\n|%s|\n", s);
	//free(s);
}