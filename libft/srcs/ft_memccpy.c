/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cotis <cotis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 13:18:16 by cotis             #+#    #+#             */
/*   Updated: 2020/11/22 13:18:27 by cotis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char *strsrc;
	unsigned char *strdst;

	strsrc = (unsigned char *)src;
	strdst = (unsigned char *)dst;
	while (n > 0 && *strsrc != (unsigned char)c)
	{
		n--;
		*strdst++ = *strsrc++;
	}
	if (n > 0)
	{
		*strdst++ = *strsrc++;
		return (strdst);
	}
	else
		return (NULL);
}
