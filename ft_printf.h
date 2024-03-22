/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 16:22:30 by claferna          #+#    #+#             */
/*   Updated: 2024/03/22 21:08:26 by claferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

/* STD LIB*/
# include <stdarg.h>
# include <unistd.h>
/* OWN LIB*/
# include "libft/libft.h"

/*MAIN FUNCTION*/
int		ft_printf(char const *format, ...);
/*CHAR*/
void	ft_print_char(va_list arg);
void	ft_putchar(char c);
/*STRING*/
void	ft_print_str(va_list arg);
void	ft_putstr(char *str);
/*VOID*/
void	ft_print_vd(va_list arg);
void	ft_putvd(void *vd);
/*DECIMAL*/
void	ft_print_decimal(va_list arg);
void	ft_putnbr(int nb);
/*UNSIGNED DECIMAL*/
void	ft_print_udecimal(va_list arg);
void	ft_putu_nbr(unsigned int u_nb);
/*HEXADECIMAL LOWERCASE/UPPERCASE*/
void	ft_print_hexa(va_list arg, int is_low);
void	ft_puthexa_low(unsigned int decimal);
void	ft_puthexa_upp(unsigned int decimal);
/*PERCENTAGE*/
void	ft_print_percentage();
#endif
