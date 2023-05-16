/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jternero <jternero@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 22:44:38 by jternero          #+#    #+#             */
/*   Updated: 2022/08/29 23:00:06 by jternero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	main(int argc, char *argv[])
{
	int	i;
	int	j;

	j = argc - 1;
	while (j > 0)
	{
		i = 0;
		while (argv[j][i] != '\0' && argc)
		{
			ft_putchar(argv[j][i]);
			i++;
		}
		ft_putchar('\n');
		j--;
	}
	return (0);
}
