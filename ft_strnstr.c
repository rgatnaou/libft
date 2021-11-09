/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgatnaou <rgatnaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 14:30:36 by rgatnaou          #+#    #+#             */
/*   Updated: 2021/11/09 16:16:54 by rgatnaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*str;
	size_t	i;
	size_t	f;

	str = (char *)haystack;
	if (needle[0] == '\0' || haystack == needle)
		return (str);
	while (*str != '\0' && len--)
	{
		if (*str == *needle)
		{
			i = -1;
			f = 0;
			while (needle[++i])
				if (needle[i] != str[i])
					f = 1;
			if (i > len)
				break ;
			if (f == 0)
				return (str);
		}
		str++;
	}
	return (NULL);
}
