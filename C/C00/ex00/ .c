/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jternero <jternero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 14:22:50 by jternero          #+#    #+#             */
/*   Updated: 2022/08/20 17:52:46 by jternero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
/*
 * esta funcion cumple la tarea de imprimir el carcter que le estamos pidiendo, declaramos char c para poder elegir que caracter hace falta imprimir. 
 * en este caso el main seria 
 *
 * int main(0)
 * {
 *	c = 'Z';
 *
 *	ft_putchar('R');
 *	return(0);
 * }
 */
