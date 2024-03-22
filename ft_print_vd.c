/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_vd.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 18:28:37 by claferna          #+#    #+#             */
/*   Updated: 2024/03/22 20:36:09 by claferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_putvd(void *vd)
{
	int	vd_len;

	vd_len = ft_strlen(vd);
	write(1, "0x", vd_len);
}

void	ft_print_vd(va_list arg)
{
	void	*vd;

	vd = va_arg(arg, void *);
	ft_putvd(vd);
}
