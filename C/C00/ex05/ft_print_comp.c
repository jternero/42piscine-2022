/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comp.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jternero <jternero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 11:44:31 by jternero          #+#    #+#             */
/*   Updated: 2022/08/20 19:32:09 by jternero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	while (a <= '7')
	{	
	b = a + 1;
		while (b <= '8')
		{
			c = b + 1;
			while (c <= '9')
			{
				write(1, &a, 1);
				write(1, &b, 1);
				write(1, &c, 1);
				if (a < '7')
					write(1, ", ", 2);
				c++;
			}
			b++;
		}	
		a++;
	}
}
/*para esta funcion hemos creado tres variables de tipo caracter. a, b, y c. la tarea que tiene que cumplir es imprimir por pantalla una sucesion creciente de las posibles combinaciones de tres digiyos distintos.
 * no debe repetirse ningun dijito, por ejemplo si se ha escrito el 012, no se podra imprimir 021, y asi con todos los numeros hasta que no hayan mas posibles ocmbinacione
 *
 *
 * el main tiene la funcion de darle un  inicio al bucle, ya que el primer numero que va a tomar en cuenta es el c y es 0.
 *
int main(void)
{
	ft_print_comb(0);

} 
*/
