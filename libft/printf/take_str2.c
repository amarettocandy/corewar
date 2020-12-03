/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   take_str2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efleta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 12:18:05 by efleta            #+#    #+#             */
/*   Updated: 2020/11/22 12:18:29 by efleta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*wchar_c(wchar_t c)
{
	char	*str;

	if (c <= 255)
	{
		str = ft_strnew(1);
		str[0] = c;
		return (str);
	}
	else
		str = NULL;
	return (str);
}

char	*make_char(char c)
{
	char *str;

	str = ft_strnew(1);
	str[0] = c;
	return (str);
}
