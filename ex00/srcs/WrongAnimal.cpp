/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 14:09:07 by yosherau          #+#    #+#             */
/*   Updated: 2025/10/09 14:19:15 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal's default constructor has been called" << std::endl;
	type = "Any WrongAnimal :0";
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal's destructor has been called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type):
	type(type)
{
	std::cout << "WrongAnimal's parameterized constructor has been called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &original):
	type(original.type)
{
	std::cout << "WrongAnimal's copy constructor was called" << std::endl;
}

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &original)
{
	std::cout << "WrongAnimal's copy assignment operator was called" << std::endl;
	if (this != &original)
		this->type = original.type;
	return (*this);
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "WrongAnimal make's random sound" << std::endl;
}

std::string	WrongAnimal::getType() const
{
	return (this->type);
}