/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 13:08:20 by yosherau          #+#    #+#             */
/*   Updated: 2026/01/21 16:50:29 by yosherau         ###   ########.fr       */
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

Dog::Dog(const Dog &original)
{
	this->type = original.type;
}

Dog	&Dog::operator=(const Dog &original)
{
	if (this != &original)
		this->type = original.type;
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "Dog goes bark bark" << std::endl;
}