/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jternero <jternero@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 02:19:53 by jternero          #+#    #+#             */
/*   Updated: 2022/08/24 12:36:51 by jternero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0' )
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			++i;
		else if (str[i] >= 'a' && str[i] <= 'z')
			++i;
		else
			return (0);
	}
	return (1);
}
