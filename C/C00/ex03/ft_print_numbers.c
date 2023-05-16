/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jternero <jternero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 20:16:18 by jternero          #+#    #+#             */
/*   Updated: 2022/08/20 18:09:47 by jternero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int	n;

	n = (48);
	while (n <= 57)
	{
		write(1, &n, 1);
		n++;
	}
}
/*
 * En esta funcion tenemos la tarea de escribir numeros del 0 al 9, deberemos de declarar el int(numero entero) para que entienda que son numeros y no caracteres. 
 * Declaramos el valor de n, en valores ASCII que para el numero 48 es 0, y realizamos un bucle hasta que llegue a la posicion 57 que representa el 9.
 *!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!


 * OJO OJO OJO OJO  el while siempre como esta ahi. el & va en el write, ya que solo esta indicando cual es el valor de n. 
 *
 *
 *!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!*/
