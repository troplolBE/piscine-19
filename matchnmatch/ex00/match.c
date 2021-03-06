/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbraeckm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/12 14:00:54 by wbraeckm          #+#    #+#             */
/*   Updated: 2018/05/13 11:47:11 by wbraeckm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		match(char *s1, char *s2)
{
	if (*s2 == '*' && *s1 != '\0')
		return (match(s1 + 1, s2) || match(s1, s2 + 1));
	if (*s2 == '*' && *s1 == '\0')
		return (match(s1, s2 + 1));
	if (*s1 == *s2 && *s1 != '\0')
		return (match(s1 + 1, s2 + 1));
	if (*s1 == '\0' && *s2 != '\0')
		return (0);
	return (*s1 == '\0');
}
