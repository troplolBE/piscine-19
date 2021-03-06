/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbraeckm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/05 15:33:29 by wbraeckm          #+#    #+#             */
/*   Updated: 2018/05/06 14:36:04 by wbraeckm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

char	ft_getchar(int x, int y, int i, int j)
{
	if (i == 0 && (j == 0 || j == y - 1))
		return ('A');
	else if (i == x - 1 && (j == 0 || j == y - 1))
		return ('C');
	else if (i == 0 || i == x - 1)
		return ('B');
	else if (j == 0 || j == y - 1)
		return ('B');
	return (' ');
}

void	rush(int x, int y)
{
	int i;
	int j;

	if (x < 0 || y < 0)
		return ;
	j = 0;
	while (j < y)
	{
		i = 0;
		while (i < x)
		{
			ft_putchar(ft_getchar(x, y, i, j));
			i++;
		}
		ft_putchar('\n');
		j++;
	}
}
