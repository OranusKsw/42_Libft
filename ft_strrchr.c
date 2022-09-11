/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okotsuwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 20:09:26 by okotsuwa          #+#    #+#             */
/*   Updated: 2022/09/10 22:04:39 by okotsuwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*tmp;

	tmp = (char *)0;
	while (*s)
	{
		if ((char)*s == (char)c)
			tmp = (char *)s;
		s++;
	}
	if ((char)*s == (char)c)
		tmp = (char *)s;
	return (tmp);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	*s1;
	char	fin;

	s1 = "Hi hello llolldjfap";
	fin = '\0';
	printf("This me ===> [%s]\n", ft_strrchr(s1, fin));
	printf("This Real ===> [%s]\n", strrchr(s1, fin));
	return(0);
}*/
