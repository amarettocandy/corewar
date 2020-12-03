/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmd_funcs.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anjada <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 12:55:20 by anjada            #+#    #+#             */
/*   Updated: 2020/11/22 12:55:24 by anjada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "corewar.h"

int			is_right_reg(unsigned char reg)
{
	if (reg >= 1 && reg <= REG_NUMBER)
		return (1);
	return (0);
}

int			correct_pos(int pos)
{
	pos %= MEM_SIZE;
	if (pos < 0)
		pos = MEM_SIZE + pos;
	return (pos);
}
