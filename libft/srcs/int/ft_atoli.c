/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoli.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdebotte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 14:41:53 by wdebotte          #+#    #+#             */
/*   Updated: 2022/04/04 10:25:54 by wdebotte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long int	ft_atoli(const char *str)
{
	int			is_negativ;
	long int	number;

	number = 0;
	is_negativ = 1;
	while (*str && is_whitespace(*str))
		str++;
	if (*str && (*str == '-' || *str == '+'))
		if (*(str++) == '-')
			is_negativ = -is_negativ;
	while (*str && (*str >= '0' && *str <= '9'))
		number = number * 10 + *(str++) - 48;
	return (number * is_negativ);
}
