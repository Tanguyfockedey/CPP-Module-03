/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafocked <tafocked@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 15:54:58 by tafocked          #+#    #+#             */
/*   Updated: 2024/11/26 19:15:35 by tafocked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): name("unnamed"), hp(10), energy(10), damage(0)
{
	std::cout << "ClapTrap unnamed created." << std::endl;
}

ClapTrap::ClapTrap(const std::string name): name(name), hp(10), energy(10), damage(0)
{
	std::cout << "ClapTrap " << name << " created." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	this->name = copy.name;
	this->hp = copy.hp;
	this->energy = copy.energy;
	this->damage = copy.damage;
	std::cout << "Copy of " << copy.name << " created." << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &copy)
{
	this->name = copy.name;
	this->hp = copy.hp;
	this->energy = copy.energy;
	this->damage = copy.damage;
	std::cout << "ClapTrap assignment operator called." << std::endl;
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout <<"ClapTrap " << this->name << " deleted." << std::endl;
}

void ClapTrap::attack(const std::string &target)
{
	if (this->energy > 0 && this->hp > 0)
	{
		this->energy -= 1;
		std::cout << this->name << " attacks " << target << ", causing " << this->damage << " damage." << std::endl;
	}
	else if (this->hp <= 0)
		std::cout << this->name << " is dead and can't perform actions." << std::endl;
	else if (this->energy <= 0)
		std::cout << this->name << " is exhausted and can't perform actions." << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << this->name << " takes " << amount << " damage." << std::endl;
	this->hp -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->energy > 0 && this->hp > 0)
	{
		this->energy -= 1;
		std::cout << this->name << " repairs " << amount << " health points back." << std::endl;
		this->hp += amount;
	}
	else if (this->hp <= 0)
		std::cout << this->name << " is dead and can't perform actions." << std::endl;
	else if (this->energy <= 0)
		std::cout << this->name << " is exhausted and can't perform actions." << std::endl;
}
