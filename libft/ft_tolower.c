/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmentat <gmentat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 20:22:26 by gmentat           #+#    #+#             */
/*   Updated: 2019/09/13 20:24:36 by gmentat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
	{
		c = c + 32;
		return (c);
	}
	else
	{
		return (c);
	}
}
