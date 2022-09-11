/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okotsuwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 09:57:38 by okotsuwa          #+#    #+#             */
/*   Updated: 2022/09/11 10:00:44 by okotsuwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*dest;
	char	*temp;
	int		n;

	n = ft_strlen(src);
	dest = malloc((n * sizeof(char)) + 1);
	temp = dest;
	while (*src)
	{
		*dest = *src;
		src ++;
		dest ++;
	}
	*dest = '\0';
	return (temp);
}
