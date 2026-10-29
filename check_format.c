/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_format.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbadandi <sbadandi@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 17:36:12 by sbadandi          #+#    #+#             */
/*   Updated: 2026/10/20 22:26:11 by sbadandi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	check_format(char type, va_list ap)
{
	int	count;

	count = 0;
	if (type == 'c')
		count += print_char(va_arg(ap, int));
	else if (type == 's')
		count += print_str(va_arg(ap, char *));
	else if (type == 'p')
		count += print_pointer(va_arg(ap, unsigned long));
	else if (type == 'd' || type == 'i')
		count += print_decimal(va_arg(ap, int));
	else if (type == 'u')
		count += print_uns_int(va_arg(ap, unsigned int));
	else if (type == 'x')
		count += print_hix(va_arg(ap, unsigned int));
	else if (type == 'X')
		count += print_hixc(va_arg(ap, unsigned int));
	else if (type == '%')
		count += print_char('%');
	return (count);
}
