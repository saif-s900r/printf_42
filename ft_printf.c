/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbadandi <sbadandi@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 23:37:35 by sbadandi          #+#    #+#             */
/*   Updated: 2026/10/20 23:39:46 by sbadandi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	ap ;
	int		count;

	if (format == NULL)
		return (-1);
	va_start(ap, format);
	count = 0;
	while (*format)
	{
		if (*format == '%' && format[1] != '\0')
		{
			format++;
			count += check_format(*format, ap);
		}
		else if (*format != '%')
			count += write(1, format, 1);
		format++;
	}
	va_end(ap);
	return (count);
}
