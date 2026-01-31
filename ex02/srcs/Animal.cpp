/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 14:09:07 by yosherau          #+#    #+#             */
/*   Updated: 2026/01/31 18:52:52 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal's default constructor has been called" << std::endl;
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

Animal::Animal(const Animal &original):
	type(original.type)
{
	std::cout << "Animal's copy constructor was called" << std::endl;
}

Animal	&Animal::operator=(const Animal &original)
{
	std::cout << "Animal's copy assignment operator was called" << std::endl;
	if (this != &original)
		this->type = original.type;
	return (*this);
}

std::string	Animal::getType() const
{
	return (this->type);
}