/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   d_func4.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cotis <cotis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 13:21:25 by cotis             #+#    #+#             */
/*   Updated: 2020/11/22 13:21:36 by cotis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "disassem.h"

char	*ft_d_aff(t_read *reader)
{
	char	*line;

	line = "\naff ";
	reader->i += 1;
	reader->arg_types = reader->code[reader->i];
	reader->i += 1;
	line = ft_strplus(line, print_arg(reader, 2, 3, 1), 0, 1);
	print_arg(reader, 2, 3, 2);
	print_arg(reader, 2, 3, 3);
	return (line);
}
