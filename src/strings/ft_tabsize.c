/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftriquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/26 15:25:38 by ftriquet          #+#    #+#             */
/*   Updated: 2016/02/26 15:26:39 by ftriquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_tabsize(void **t)
{
	int		i;

	i = 0;
	if (!t)
		return (-1);
	while (t[i])
		i++;
	return (i);
}
