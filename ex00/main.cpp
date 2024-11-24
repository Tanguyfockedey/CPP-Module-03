/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafocked <tafocked@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 15:54:31 by tafocked          #+#    #+#             */
/*   Updated: 2024/11/24 16:34:21 by tafocked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap test;
	ClapTrap Alice("Alice");
	ClapTrap Bob = ClapTrap("Bob");

	std::cout << std::endl;

	for (int i = 0; i < 5; i++)
		Alice.attack("Bob");
	Bob.takeDamage(10);
	Bob.beRepaired(1);

	std::cout << std::endl;

	ClapTrap Alice2(Alice);
	ClapTrap Alice3 = Alice2;
	for (int i = 0; i < 6; i++)
		Alice2.attack("Bob");
	Alice3.beRepaired(3);

	std::cout << std::endl;
}
