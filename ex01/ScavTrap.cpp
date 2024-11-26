/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafocked <tafocked@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 15:43:13 by tafocked          #+#    #+#             */
/*   Updated: 2024/11/26 19:50:47 by tafocked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap(), guarding(false)
{
	hp = 100;
	energy = 50;
	damage = 20;
	std::cout << "ScavTrap unnamed created." << std::endl;
}

ScavTrap::ScavTrap(const std::string name): ClapTrap(name), guarding(false)
{
	hp = 100;
	energy = 50;
	damage = 20;
	std::cout << "ScavTrap " << name << " created." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy): ClapTrap(copy)
{
	this->guarding = copy.guarding;
	std::cout << "ScavCopy of " << name << " created." << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << name << " deleted." << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &copy)
{
	this->name = copy.name;
	this->hp = copy.hp;
	this->energy = copy.energy;
	this->damage = copy.damage;
	this->guarding = copy.guarding;
	std::cout << "ScavTrap assignment operator called." << std::endl;
	return (*this);
}

void ScavTrap::attack(const std::string &target)
{
	if (this->energy > 0 && this->hp > 0)
	{
		this->energy -= 1;
		std::cout << this->name << " power-attacks " << target << ", causing " << this->damage << " damage." << std::endl;
	}
	else if (this->hp <= 0)
		std::cout << this->name << " is dead and can't perform actions." << std::endl;
	else if (this->energy <= 0)
		std::cout << this->name << " is exhausted and can't perform actions." << std::endl;
}

void ScavTrap::guardGate(void)
{
	if (this->hp <= 0)
		std::cout << "ScavTrap " << name << " is dead and can´t perform actions." << std::endl;
	else if (this->guarding == false)
	{
		std::cout << "ScavTrap " << name << " enters guarding mode." << std::endl;
		this->guarding = true;
	}
	else
	{
		std::cout << "ScavTrap " << name <<" leaves guarding mode." << std::endl;
		this->guarding = false;
	}
}
