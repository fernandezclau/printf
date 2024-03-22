/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 16:19:08 by claferna          #+#    #+#             */
/*   Updated: 2024/03/22 21:08:17 by claferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdio.h>

void	ft_print_format(char type, va_list arg)
{
	if (type == 'c')
		ft_print_char(arg);
	else if (type == 's')
		ft_print_str(arg);
	/*else if (type == 'p')
		ft_print_vd(arg);*/
	else if (type == 'd' || type == 'i')
		ft_print_decimal(arg);
	else if (type == 'u')
		ft_print_udecimal(arg);
	else if (type == 'x')
		ft_print_hexa(arg, 1);
	else if (type == 'X')
		ft_print_hexa(arg, 0);
	else if (type == '%')
		ft_print_percentage();
}
int	ft_printf(char const *format, ...)
{
	va_list args;
	
	va_start(args, format);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			ft_print_format(*format, args);
		}
		else
			ft_putchar(*format);
		format++;
	}
	
	return (0);	
}
/*
int main(void)
{
	//CHARACTER
	printf("----TESTS CARACTER----\n");
	printf("-1. Imprimir un caracter--\n");
	printf("Mi función:\n");
	ft_printf("El caracter: %c", 'a');
	printf("\n");
	printf("Original:\n");
	printf("El caracter: %c", 'a');
	printf("\n");
	//STRING
	printf("----TESTS STRINGS----\n");
	printf("-1. Imprimir un string--\n");
	printf("Mi función: \n");
	ft_printf("El string: %s", "hola");
	printf("\n");
	printf("Original:\n");
	printf("El string: %s", "hola");
	printf("\n");
	//POINTER
	printf("----TESTS POINTER----\n");
	printf("-1. Imprimir una dirección de memoria--\n");
	printf("Mi función:\n");
	ft_printf("La direccion de memoria: %p", (void *)"123");
	printf("\n");
	printf("Original:\n");
	printf("La direccion de memoria: %p", (void *)"123");
	printf("\n");
	//DECIMAL
	printf("----TESTS DECIMAL----\n");
	printf("-1. Imprimir un decimal--\n");
	printf("Mi función: \n");
	ft_printf("El decimal: %d", 1234);
	printf("\n");
	printf("Original:\n");
	printf("El decimal: %d", 1234);
	printf("\n");
	//INTEGER
	printf("----TESTS INTEGER----\n");
	printf("-1. Imprimir un integer--\n");
	printf("Mi función: \n");
	ft_printf("El integer: %i", 1234);
	printf("\n");
	printf("Original:\n");
	printf("El integer: %i", 1234);
	printf("\n");
	//UNSIGNED DECIMAL
	printf("----TESTS UNSIGNED DECIMAL----\n");
	printf("-1. Imprimir un decimal sin signo--\n");
	printf("Mi función: \n");
	ft_printf("El decimal sin signo: %u", 1234);
	printf("\n");
	printf("Original:\n");
	printf("El decimal sin signo: %u", 1234);
	printf("\n");
	//LOW HEXADECIMAL
	printf("----TESTS HEXA LOW----\n");
	printf("-1. Imprimir un decimal--\n");
	printf("Mi función: \n");
	ft_printf("El decimal: %x", 16);
	printf("\n");
	printf("Original:\n");
	printf("El decimal: %x", 1234);
	printf("\n");
	//UPP HEXADECIMAL
	printf("----TESTS HEXA UP----\n");
	printf("-1. Imprimir un decimal--\n");
	printf("Mi función: \n");
	ft_printf("El decimal: %X", 1234);
	printf("\n");
	printf("Original:\n");
	printf("El decimal: %X", 1234);
	printf("\n");
	//PERCENTAGE
	printf("----TESTS PERCENTAGE----\n");
	printf("-1. Imprimir un porcentaje--\n");
	printf("Mi función: \n");
	ft_printf("El porcentaje: %%");
	printf("\n");
	printf("Original:\n");
	printf("El decimal: %%");
	printf("\n");
}*/
