/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafocked <tafocked@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 15:54:31 by tafocked          #+#    #+#             */
/*   Updated: 2024/11/26 20:03:44 by tafocked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap *test = new ScavTrap;
	delete test;
	std::cout << std::endl;

	ScavTrap Alice("Alice");
	ScavTrap Bob = ScavTrap("Bob");
	std::cout << std::endl;

	for (int i = 0; i < 5; i++)
		Alice.attack("Bob");
	Bob.takeDamage(100);
	Bob.beRepaired(1);
	std::cout << std::endl;

	ScavTrap Alice2(Alice);
	ClapTrap Bob2 = Bob;
	Bob = Alice;
	std::cout << std::endl;

	Alice.guardGate();
	Alice2.guardGate();
	Alice2.guardGate();
	std::cout << std::endl;

	Bob.beRepaired(3);
	Bob2.beRepaired(3);
	Bob2 = Alice;
	Bob2.beRepaired(50);

	std::cout << std::endl;
}
