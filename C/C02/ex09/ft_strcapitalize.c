/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jternero <jternero@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 18:19:48 by jternero          #+#    #+#             */
/*   Updated: 2022/08/25 17:15:53 by jternero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*putlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{	
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

char	*putfirstletterup(char *str)
{
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 32;
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	putlowcase(str);
	putfirstletterup(str);
	i = 1;
	while (str[i] != '\0')
	{
		if (!((str[i - 1] >= 'A' && str[i - 1] <= 'Z')
				|| (str[i - 1] >= 'a' && str[i - 1] <= 'z')
				|| (str[i - 1] >= '0' && str[i - 1] <= '9')))
		{
			if (str[i] >= 'a' && str[i] <= 'z')
							str[i] = str[i] -32;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
						str[i] = str[i] +32;
			i++;
	}
	return (str);
}
