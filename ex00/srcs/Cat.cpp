/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 13:08:20 by yosherau          #+#    #+#             */
/*   Updated: 2026/01/31 16:29:49 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cat.hpp"

Cat::Cat():
	Animal("El Gatito")
{
	std::cout << "Cat's default constructor was called" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat's destructor was called" << std::endl;
}

Cat::Cat(const Cat &original):
	Animal(original)
{
		std::cout << "Cat's copy constructor was called" << std::endl;
}

Cat	&Cat::operator=(const Cat &original)
{
	std::cout << "Cat's copy assignment operator was called" << std::endl;
	if (this != &original)
		Animal::operator=(original);
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "Cat goes meow meow" << std::endl;
}