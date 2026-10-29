/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_str.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbadandi <sbadandi@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 20:01:25 by sbadandi          #+#    #+#             */
/*   Updated: 2026/10/20 22:17:41 by sbadandi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_str(char *str)
{
	int	count;

	if (str == NULL)
		return (write(1, "(null)", 6));
	count = 0;
	while (str[count] != '\0')
	{
		print_char(str[count]);
		count++;
	}
	return (count);
}
