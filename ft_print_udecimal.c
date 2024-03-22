/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_udecimal.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 19:46:38 by claferna          #+#    #+#             */
/*   Updated: 2024/03/22 20:31:35 by claferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_putu_nbr(unsigned int u_nb)
{
	if (u_nb > 9)
	{
		ft_putu_nbr(u_nb / 10);
		ft_putchar(u_nb % 10 + '0');
	}
	else
		ft_putchar(u_nb + '0');
}

void	ft_print_udecimal(va_list arg)
{
	unsigned int	num;

	num = va_arg(arg, unsigned int);
	ft_putu_nbr(num);
}
