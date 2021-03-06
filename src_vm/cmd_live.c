/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmd_live.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efleta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 12:18:05 by efleta            #+#    #+#             */
/*   Updated: 2020/11/22 12:18:29 by efleta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "corewar.h"

static int	is_player_id(int n_players, int id)
{
	if (id > 0 && id <= n_players)
		return (1);
	return (0);
}

int			cmd_live(unsigned char *mem, t_cursor *cursor, t_game_info *info)
{
	long int	player_id;

	++info->live_count;
	if (cursor)
		cursor->last_live_cycle = info->current_cycle;
	player_id = -get_t_dir4(mem, cursor->position);
	if (is_player_id(info->n_players, player_id))
		info->last_alive = player_id;
	if (LOG_MODE)
		ft_printf("live: %d\n", player_id);
	return (5);
}
