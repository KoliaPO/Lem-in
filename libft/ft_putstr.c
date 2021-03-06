/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myprosku <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/27 16:43:47 by myprosku          #+#    #+#             */
/*   Updated: 2017/10/27 16:43:48 by myprosku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr(char const *s)
{
	int		i;
	char	*str;

	i = 0;
	if (s)
	{
		str = (char *)s;
		while (str[i])
		{
			ft_putchar(str[i]);
			i++;
		}
	}
}
