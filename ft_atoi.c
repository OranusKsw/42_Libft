/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okotsuwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 09:23:15 by okotsuwa          #+#    #+#             */
/*   Updated: 2022/09/11 11:32:34 by okotsuwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_atoi(const char *str)
{
	int	n;
	int	p;

	p = 1;
	while ((*str == ' ' || *str == '\n' || *str == '\t')
		|| (*str == '\v' || *str == '\f' || *str == '\r'))
		str ++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			p *= -1;
		str++;
	}
	n = 0;
	while (*str >= '0' && *str <= '9')
	{
		n *= 10;
		n += (int) *str - 48;
		str ++;
	}
	return (n * p);
}
/*
int main()
{
	printf("%d\n%d", ft_atoi("-2147483648"), atoi("-2147483648"));
}*/
