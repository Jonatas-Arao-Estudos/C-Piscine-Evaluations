/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarao-de <jarao-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 10:35:25 by jarao-de          #+#    #+#             */
/*   Updated: 2024/08/28 09:26:58 by jarao-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_str_is_numeric.h"

int	main(void)
{
	char	str[5];
	char	str2[1];

	str[0] = '1';
	str[1] = '9';
	str[2] = '9';
	str[3] = '2';
	str[4] = '\0';
	if (ft_str_is_numeric(str) == 1)
		write(1, "Y", 1);
	else
		write(1, "N", 1);
	str[2] = 'I';
	if (ft_str_is_numeric(str) == 1)
		write(1, "Y", 1);
	else
		write(1, "N", 1);
	str2[0] = '\0';
	if (ft_str_is_numeric(str2) == 1)
		write(1, "Y", 1);
	else
		write(1, "N", 1);
	return (0);
}
