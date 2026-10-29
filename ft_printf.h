/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbadandi <sbadandi@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 17:16:25 by sbadandi          #+#    #+#             */
/*   Updated: 2026/10/20 23:22:52 by sbadandi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

int	ft_printf(const char *str, ...);
int	check_format(char type, va_list ap);
int	print_char(int c);
int	print_str(char *str);
int	print_pointer(unsigned long p);
int	print_decimal(int n);
int	print_uns_int(unsigned int n);
int	print_hix(unsigned long n);
int	print_hixc(unsigned long n);

#endif
