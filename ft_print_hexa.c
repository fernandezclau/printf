/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 19:15:56 by claferna          #+#    #+#             */
/*   Updated: 2024/03/22 21:09:48 by claferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_puthexa_low(unsigned int decimal)
{

	while (decimal > 0)
	{
		ft_putchar("0123456789abcdef"[decimal / 16]);
		ft_putchar("0123456789abcdef"[decimal % 16]);
	}
	//hex = &"0123456789abcdef"[decimal % 16];
}

void	ft_puthexa_upp(unsigned int decimal)
{
	char	*hex;

	hex = &"0123456789ABCDEF"[decimal % 16];
	write(1, &hex, 30);
}

void	ft_print_hexa(va_list arg, int is_low)
{
	unsigned int	num;

	num = va_arg(arg, unsigned int);
	if (is_low)
		ft_puthexa_low(num);
	else
		ft_puthexa_upp(num);
}
