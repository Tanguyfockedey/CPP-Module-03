/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafocked <tafocked@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 15:54:31 by tafocked          #+#    #+#             */
/*   Updated: 2024/11/26 20:42:11 by tafocked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
	FragTrap test;
	FragTrap Alice("Alice");
	FragTrap Bob("Bob");
	ScavTrap Cecile("Cecile");
	ClapTrap Bob2 = Bob;
	FragTrap Bob3 = Bob;
	std::cout << std::endl;

	Alice.attack("Barrel");
	Bob.takeDamage(100);
	Bob.beRepaired(1);
	std::cout << std::endl;

	Cecile.guardGate();
	Cecile.guardGate();
	std::cout << std::endl;

	Alice.highFivesGuys();
	Bob.highFivesGuys();
	std::cout << std::endl;
}
