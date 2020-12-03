/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cotis <cotis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 13:23:50 by cotis             #+#    #+#             */
/*   Updated: 2020/11/22 13:24:01 by cotis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t i;

	i = 0;
	while (*src != '\0' && len > 0)
	{
		dst[i++] = *src++;
		len--;
	}
	while (len > 0)
	{
		dst[i++] = '\0';
		len--;
	}
	return (dst);
}
