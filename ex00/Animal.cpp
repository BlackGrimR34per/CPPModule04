/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 14:09:07 by yosherau          #+#    #+#             */
/*   Updated: 2025/10/09 14:16:11 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	type = "Any animal :0";
}

Animal::~Animal()
{
	std::cout << "Animal's destructor has been called" << std::endl;
}

Animal::Animal(std::string type):
	type(type)
{
	std::cout << "Animal's parameterized constructor has been called" << std::endl;
}

Animal::Animal(const Animal &original)
{
	this->type = original.type;
}

Animal	&Animal::operator=(const Animal &original)
{
	if (this != &original)
		this->type = original.type;
	return (*this);
}

void	Animal::makeSound(void) const
{
	std::cout << "Animal make's random sound" << std::endl;
}

std::string	Animal::getType() const
{
	return (this->type);
}