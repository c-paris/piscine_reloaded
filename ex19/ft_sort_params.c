/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cparis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 19:12:10 by cparis            #+#    #+#             */
/*   Updated: 2016/11/11 13:14:34 by cparis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int		a;

	a = 0;
	while (str[a])
	{
		ft_putchar(str[a]);
		a++;
	}
	ft_putchar('\n');
}

int		ft_strcmp(char *str, char *spr)
{
	int		a;

	a = 0;
	while (str[a] || spr[a])
	{
		if (str[a] != spr[a])
			return (str[a] - spr[a]);
		a++;
	}
	return (0);
}

int		main(int argc, char **argv)
{
	char	*tmp;
	int		find;
	int		i;

	find = 1;
	while (find != 0)
	{
		find = 0;
		i = 0;
		while (++i < argc - 1)
		{
			if (ft_strcmp(argv[i], argv[i + 1]) > 0)
			{
				tmp = argv[i];
				argv[i] = argv[i + 1];
				argv[i + 1] = tmp;
				find = 1;
			}
		}
	}
	i = 0;
	while (++i < argc)
		ft_putstr(argv[i]);
	return (0);
}
