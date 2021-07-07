/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarette <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 17:10:58 by jbarette          #+#    #+#             */
/*   Updated: 2021/06/15 18:19:34 by jbarette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_exist(char *str, char c)
{
	int i;

	i = 0;
	while (s1[i])
	{
		if (s1[i] == c)
			return (1);
		i++;
	}
	return (0);
}

void	ft_treat_union(char *s1, char *s2)
{
	int		i;
	int		x;
	char	s3[255];
	char	*tmp;

	i = 0;
	x = 0;
	while (s1[i])
	{
		if (!(ft_exist(s3, s1[i])))
			s3[x++] = s1[i];	
		i++;
	}
	i = 0
	while (s2[i])
	{
		if (!ft_exist(s3, s2[i]))
			s3[i++] = s2[i];
		i++;
	}
	s3[i] = '\0';
	i = 0;
	while (s3[i])
		ft_putchar(s3[i++]);
}

int	main(int argc, char **argv)
{
	if (argc == 3)
		ft_treat_union(argv[1], argv[2]);
	ft_putchar('\n');
	return (0);
}
