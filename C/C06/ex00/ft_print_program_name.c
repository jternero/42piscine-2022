/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jternero <jternero@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 22:42:16 by jternero          #+#    #+#             */
/*   Updated: 2022/08/30 19:56:41 by jternero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	main(int argc, char **argv)
{
	int	cont;

	argc = 1;
	cont = 0;
	while (argv[0][cont] != '\0')
	{		
		write(1, &argv[0][cont], 1);
	cont++;
	}
	write (1, "\n", 1);
	return (0);
}
