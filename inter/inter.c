/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarette <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 17:10:58 by jbarette          #+#    #+#             */
/*   Updated: 2021/06/15 18:14:46 by jbarette         ###   ########.fr       */
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

void	ft_treat_inter(char *s1, char *s2)
{
	int		i;
	int		x;
	int		y;
	char	s3[255];

	i = 0;
	x = 0;
	y = 0;
	while (s1[i])
	{
		while (s2[x])
		{
			if (s1[i] == s2[x])
			{
				if (!(ft_exist(s3, s1[i])))
					s3[y++] = s1[i];	
			}
			x++;
		}
		x = 0;
		i++;
	}
	s3[y] = '\0';
	i = 0;
	while (s3[i])
		ft_putchar(s3[i++]);
}

int	main(int argc, char **argv)
{
	if (argc == 3)
		ft_treat_inter(argv[1], argv[2]);
	ft_putchar('\n');
	return (0);
}
