/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cursor_change_position.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmarlin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 12:23:50 by bmarlin           #+#    #+#             */
/*   Updated: 2020/11/22 12:23:53 by bmarlin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "corewar.h"

void		cursor_change_position(t_cursor *list, int shift)
{
	if (list)
	{
		list->position += shift;
		list->position %= MEM_SIZE;
		if (list->position < 0)
			list->position = MEM_SIZE + list->position;
	}
}
