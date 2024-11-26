/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafocked <tafocked@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 20:15:20 by tafocked          #+#    #+#             */
/*   Updated: 2024/11/26 20:20:54 by tafocked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
	public:
		// Constructors
		FragTrap();
		FragTrap(const std::string name);
		FragTrap(const FragTrap &copy);
		// Destructor
		~FragTrap();
		// Operator overload
		FragTrap &operator=(const FragTrap &copy);

		void	highFivesGuys(void);
};