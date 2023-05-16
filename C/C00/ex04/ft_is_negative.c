/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jternero <jternero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 21:14:09 by jternero          #+#    #+#             */
/*   Updated: 2022/08/20 19:22:05 by jternero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	p;

	p = 'P';
	if (n >= 0)
		write (1, &p, 1);
	else
	{
		p = 'N';
		write (1, &p, 1);
	}
}
/*
 * En esta funcion le vamos a dar la tarea de que nos escriba por pantalla una N si el numero que le damos es negativo y una P si el numero que le estamos dando
 * es positivo.
 *
 * en el primer if le damos la condicion de que sea igfual o mayor que 0, y el else le diremos que si no cumple con lo anterior nos imprima una N.
 *
 * el main para este ejercicio seria:
 *
 * int main(0)
 * {
 *	ft_is_negative(-1);
 *	return(0)
 * }
 *
 * en este caso le hemos dado un valor negativo al la variable p, imprimiendo por pantall la letra N.
 *
 * y ya sstaaa hulio!
