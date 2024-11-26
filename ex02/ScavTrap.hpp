/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafocked <tafocked@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 15:43:50 by tafocked          #+#    #+#             */
/*   Updated: 2024/11/26 20:02:39 by tafocked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
	public:
		/* constructors */
		ScavTrap();
		ScavTrap(const std::string name);
		ScavTrap(const ScavTrap &copy);
		/* destructor */
		~ScavTrap();
		/* operator overload*/
		ScavTrap &operator=(const ScavTrap &copy);

		void	attack(const std::string &target);
		void	guardGate(void);

	private:
		bool	guarding;
};