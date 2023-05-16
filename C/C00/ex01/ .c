/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jternero <jternero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 11:55:26 by jternero          #+#    #+#             */
/*   Updated: 2022/08/20 17:56:13 by jternero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	n;

	n = ('a');
	while (n <= 'z')
	{
		write(1, &n, 1);
		n++;
	}
}
/* En este caso la funcion nos hace la tarea de escribir los caracteres que hay desde el caracter a hasta el caracter z, hemos creado un bucle que empieza en 'a' y acabaria en cuando llegase a 'z', en este caso el prototipo de la funcion nos indica que no le tenemos que dar ningun valor a la funcion al llamarla en el main .
 *
 * int main(0)
 * {
 *	ft_print_alphabet(0);
 *	return(0);
 * }*/
