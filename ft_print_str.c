/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 19:58:55 by claferna          #+#    #+#             */
/*   Updated: 2024/03/23 13:52:11 by claferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
** DESCRIPTION: Funtions to print strings (arrays of chars).
*/

#include <stdio.h>

void	ft_putstr_reverse(char *str, int index)
{
	while (index >= 0)
		write(1, &str[index--], 1);
}

void	ft_putstr(char *str, int *bytes)
{
	while (*str != '\0')
	{
		ft_putchar(*str, bytes);
		str++;
	}
}

void	ft_print_str(va_list arg, int *bytes)
{
	char	*str;

	str = va_arg(arg, char *);
	if (str != NULL)
		ft_putstr(str, bytes);
	else
		ft_putstr("(null)", bytes);
}
