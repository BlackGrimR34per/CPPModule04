/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 13:08:20 by yosherau          #+#    #+#             */
/*   Updated: 2026/01/31 16:33:57 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/WrongCat.hpp"

WrongCat::WrongCat():
	WrongAnimal("Wrong El Gatito")
{
	std::cout << "WrongCat's default constructor was called" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat's destructor was called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &original):
	WrongAnimal(original)
{		
		std::cout << "WrongCat's copy constructor was called" << std::endl;
}

WrongCat	&WrongCat::operator=(const WrongCat &original)
{
	std::cout << "WrongCat's copy assignment operator was called" << std::endl;
	if (this != &original)
		WrongAnimal::operator=(original);
	return (*this);
}

void	WrongCat::makeSound(void) const
{
	std::cout << "WrongCat goes meow meow" << std::endl;
}