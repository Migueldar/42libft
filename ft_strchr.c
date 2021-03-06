/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-arpe <mde-arpe@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 02:02:26 by mde-arpe          #+#    #+#             */
/*   Updated: 2022/03/24 15:40:05 by mde-arpe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	char	find;

	find = c;
	while (*s != find)
	{
		if (*s == 0)
			return (0);
		s++;
	}
	return ((char *) s);
}
