/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafocked <tafocked@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 20:15:27 by tafocked          #+#    #+#             */
/*   Updated: 2024/11/26 20:33:41 by tafocked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap()
{
	hp = 100;
	energy = 100;
	damage = 30;
	std::cout << "FragTrap unnamed created." << std::endl;
}

FragTrap::FragTrap(const std::string name): ClapTrap(name)
{
	hp = 100;
	energy = 100;
	damage = 30;
	std::cout << "FragTrap " << name << " created." << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy): ClapTrap(copy)
{
	std::cout << "FragCopy of " << name << " created." << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << name << " deleted." << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &copy)
{
	this->name = copy.name;
	this->hp = copy.hp;
	this->energy = copy.energy;
	this->damage = copy.damage;
	std::cout << "FragTrap assignment operator called." << std::endl;
	return (*this);
}

void FragTrap::highFivesGuys(void)
{
	if (hp <= 0)
		std::cout << "FragTrap " << name << " is dead and can´t perform actions." << std::endl;
	else
		std::cout << "FragTrap " << name << " requests a high five : GGWP !" << std::endl;
}