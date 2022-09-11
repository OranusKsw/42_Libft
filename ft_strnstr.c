/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okotsuwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 23:19:42 by okotsuwa          #+#    #+#             */
/*   Updated: 2022/09/11 09:22:20 by okotsuwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include<stdio.h>

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	char	*a;
	char	*temp;
	size_t	tlen;

	if (*to_find == '\0' )
		return ((char *)str);
	while (*str != '\0' && len--)
	{
		tlen = len;
		a = (char *)str;
		temp = (char *)to_find;
		while (*temp == *a && *(temp++) != '\0' && len--)
			a ++;
		if (*temp == '\0')
			return ((char *)str);
		len = tlen;
		str ++;
	}
	return (NULL);
}
