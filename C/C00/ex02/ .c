/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jternero <jternero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 20:03:00 by jternero          #+#    #+#             */
/*   Updated: 2022/08/20 18:05:57 by jternero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	n;

	n = ('z');
	while (n >= 'a')
	{
		write(1, &n, 1);
		n--;
	}
}
/* esta funcion nos pide que se realize una cadena de caracteres pero de manera recursiva, con lo que le indicaremos que el punto de partdia es la z y
 * el bucle tendra que ir restando uno para que vaya hacia atras.
 *
 * ojo con el while, su estructura siempre es la misma ( while (n >= 'ejm') ) no hace falta darle direccion ya que solo la estamos nombrando. 
 * */
