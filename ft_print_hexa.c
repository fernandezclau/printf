/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 19:15:56 by claferna          #+#    #+#             */
/*   Updated: 2024/03/23 13:51:35 by claferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
** DESCRIPTION: Functions to print in hexadecimal
*/

void	ft_puthexa(unsigned int decimal, int is_low, int *bytes)
{
	char	hex_str[25];
	char	*hex_chars;
	int		index;

	index = 0;
	hex_chars = "0123456789abcdef";
	if (!is_low)
		hex_chars = "0123456789ABCDEF";
	if (decimal == 0)
	{
		ft_putnbr(0, bytes);
		return ;
	}
	while (decimal > 0)
	{
		hex_str[index] = hex_chars [decimal % 16];
		decimal /= 16;
		index++;
		(*bytes)++;
	}
	hex_str[index] = 0;
	ft_putstr_reverse(hex_str, index);
}

void	ft_print_hexa(va_list arg, int is_low, int *bytes)
{
	unsigned int	num;

	num = va_arg(arg, unsigned int);
	if (is_low == 1)
		ft_puthexa(num, 1, bytes);
	else
		ft_puthexa(num, 0, bytes);
}
