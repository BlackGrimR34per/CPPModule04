/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 13:08:20 by yosherau          #+#    #+#             */
/*   Updated: 2026/01/31 16:53:08 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Dog.hpp"

Dog::Dog():
	Animal("Doge")
{
	std::cout << "Dog's default constructor was called" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog's destructor was called" << std::endl;
}

Dog::Dog(const Dog &original):
	Animal(original)
{
	std::cout << "Dog's copy constructor was called" << std::endl;
}

Dog	&Dog::operator=(const Dog &original)
{
	std::cout << "Dog's copy assignment operator was called" << std::endl;
	if (this != &original)
		Animal::operator=(original);
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "Dog goes bark bark" << std::endl;
}