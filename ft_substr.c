/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okotsuwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 16:08:37 by okotsuwa          #+#    #+#             */
/*   Updated: 2022/09/11 17:37:19 by okotsuwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ans;
	int		i;

	if (!*s)
		return (0);
	if (start > len)
		len = 0;
	else if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	ans = (char *)malloc((len + 1) * sizeof(char));
	if (!ans || ans == NULL)
		return (0);
	i = 0;
	while (len-- && s[start])
		ans[i++] = s[start++];
	ans[i] = '\0';
	return (ans);
}
