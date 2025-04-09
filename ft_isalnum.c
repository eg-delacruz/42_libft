/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erde-la- <erde-la-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 14:52:34 by erde-la-          #+#    #+#             */
/*   Updated: 2024/09/18 14:52:35 by erde-la-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= '0' && c <= '9'))
		return (1);
	if ((c >= 'A' && c <= 'Z'))
		return (1);
	if ((c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}
