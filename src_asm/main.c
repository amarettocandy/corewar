/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cotis <cotis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 13:20:48 by cotis             #+#    #+#             */
/*   Updated: 2020/11/22 13:20:59 by cotis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "assem.h"
#include "disassem.h"

int	is_s_file(char *str)
{
	int i;

	i = ft_strlen(str);
	if (i >= 3 && str[i - 2] == '.' && str[i - 1] == 's')
		return (1);
	return (0);
}

int	is_cor_file(char *str)
{
	int i;

	i = ft_strlen(str);
	if (i >= 5 && str[i - 1] == 'r' && str[i - 2] == 'o'
			&& str[i - 3] == 'c' && str[i - 4] == '.')
		return (1);
	return (0);
}

int	main(int argc, char **argv)
{
	if (argc == 2 && is_s_file(argv[1]))
		return (assembler(argv[1]));
	else if (argc == 2 && is_cor_file(argv[1]))
		disassembler(argv[1]);
	else
		ft_printf("usage: ./assembler map\n");
	return (0);
}
