/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myprosku <myprosku@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 17:27:04 by myprosku          #+#    #+#             */
/*   Updated: 2018/01/11 15:59:44 by myprosku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isspace(char c)
{
	if (c)
	{
		return (c == ' ' || c == '\t' || c == '\n' ||
				c == '\v' || c == '\f' || c == '\r');
	}
	return (0);
}
