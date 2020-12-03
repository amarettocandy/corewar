/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_vm.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cotis <cotis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 13:17:43 by cotis             #+#    #+#             */
/*   Updated: 2020/11/22 13:17:54 by cotis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "corewar.h"

static void	mem_buff_stringadd(unsigned char *mem, unsigned char *str,
		int index, int str_len)
{
	int	bytes_before_end;

	if (str_len > MEM_SIZE)
		return ;
	index = index % MEM_SIZE;
	bytes_before_end = MEM_SIZE - index;
	if (str_len <= bytes_before_end)
		ft_memcpy(mem + index, str, str_len);
	else
	{
		ft_memcpy(mem + index, str, bytes_before_end);
		ft_memcpy(mem, str + bytes_before_end, str_len - bytes_before_end);
	}
}

void		init_vm(unsigned char *mem, t_champ *champs, int count)
{
	int i;
	int pos;

	i = 0;
	pos = 0;
	while (i < count)
	{
		mem_buff_stringadd(mem, champs[i].code, pos, champs[i].sizeof_code);
		pos += MEM_SIZE / count;
		i++;
	}
}