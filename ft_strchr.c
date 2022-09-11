/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okotsuwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 20:21:32 by okotsuwa          #+#    #+#             */
/*   Updated: 2022/09/11 10:51:07 by okotsuwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (unsigned char)c)
			return ((char *)s);
		s++;
	}
	if (*s == (unsigned char)c)
		return ((char *)s);
	return (NULL);
}
/*
#include <stdio.h>
#include<string.h>
int main()
{
	char s[] = "tripouille";
	printf("%s\n%s\n%c",ft_strchr(s, 't' + 256), strchr(s, 't' + 256), 't' + 256);
}*/
