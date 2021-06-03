/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00.cpp                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppunzo <ppunzo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 17:45:41 by ppunzo            #+#    #+#             */
/*   Updated: 2021/05/31 10:40:44 by ppunzo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	ft_toupper(char *c)
{
	if (*c >= 'a' && *c <= 'z')
	{
		*c = *c - 'a' + 'A';
	}
}

void	ft_toupper_string(char *string)
{
	int index = 0;

	while (string[index])
	{
		ft_toupper(&string[index]);
		index += 1;
	}
}

int main(int argc, char **argv)
{
	int		index = 1;
	(void)argc;

	if (!argv[index])
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	while (argv[index])
	{
		ft_toupper_string(argv[index]);
		std::cout << argv[index];
		index += 1;
	}
	std::cout << "\n";
}
