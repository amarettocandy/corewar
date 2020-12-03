/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmarlin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 12:23:50 by bmarlin           #+#    #+#             */
/*   Updated: 2020/11/22 12:23:53 by bmarlin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "corewar.h"

void		draw(t_game_info *game)
{
	set_field(game->visual.win_field, *(game->orig_cursor_list),
			game->visual.mem, game->color_mem);
	set_info(game->visual.win_info, game, game->visual.champs);
}
