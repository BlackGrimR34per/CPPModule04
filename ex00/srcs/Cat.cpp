/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 13:08:20 by yosherau          #+#    #+#             */
/*   Updated: 2026/01/21 16:50:25 by yosherau         ###   ########.fr       */
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

Cat::Cat(const Cat &original)
{
	this->type = original.type;
}

Cat	&Cat::operator=(const Cat &original)
{
	if (this != &original)
		this->type = original.type;
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "Cat goes meow meow" << std::endl;
}