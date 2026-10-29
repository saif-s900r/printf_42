/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_uns_int.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbadandi <sbadandi@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 22:05:58 by sbadandi          #+#    #+#             */
/*   Updated: 2026/10/19 22:12:44 by sbadandi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_uns_int(unsigned int n)
{
	int	count;

	count = 0;
	if (n >= 10)
		count += print_uns_int(n / 10);
	count += print_char((n % 10) + '0');
	return (count);
}
