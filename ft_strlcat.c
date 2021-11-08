/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgatnaou <rgatnaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 15:43:13 by rgatnaou          #+#    #+#             */
/*   Updated: 2021/11/07 11:33:54 by rgatnaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	lendst;
	size_t	lensrc;
	size_t	ldst;

	lensrc = ft_strlen(src);
	lendst = ft_strlen(dst);
	ldst = lendst;
	i = 0;
	if (lendst >= dstsize + 1)
		return (lensrc + dstsize);
	while (ldst < dstsize - 1 && src[i])
	{
		dst[ldst] = *((char *)src + i);
		i++;
		ldst++;
	}
	dst[ldst] = '\0';
	return (lensrc + lendst);
}
