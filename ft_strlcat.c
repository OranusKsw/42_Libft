/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okotsuwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 13:30:25 by okotsuwa          #+#    #+#             */
/*   Updated: 2022/09/11 15:11:54 by okotsuwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len_d;

	len_d = ft_strlen(dst);
	if (len_d >= dstsize)
		return (dstsize + ft_strlen(src));
	i = len_d;
	if (dstsize > 0)
	{
		while (src[i - len_d] && i < dstsize - 1)
		{
			dst[i] = src[i - len_d];
			i++;
		}
	}
	dst[i] = '\0';
	return (ft_strlen(src) + len_d);
}
/*
#include<stdio.h>
#include<string.h>
int main()
{
	char *dest;
	memset(dest, 0, 15);
	memset(dest, 'r', 6);

	dest[10] = 'a';
	printf("%d\t%s",ft_strlcat(dest, "lorem ipsum dolor sit amet", 0),dest);
	return 0;
}*/
