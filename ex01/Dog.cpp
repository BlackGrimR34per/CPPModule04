/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 13:08:20 by yosherau          #+#    #+#             */
/*   Updated: 2025/10/09 17:27:52 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog():
	Animal("Doge")
{
	this->itsBigBrainTime = new Brain();
	std::cout << "Dog's default constructor was called" << std::endl;
}

Dog::~Dog()
{
	delete(itsBigBrainTime);
	std::cout << "Dog's destructor was called" << std::endl;
}

Dog::Dog(const Dog &original)
{
	this->type = original.type;
	this->itsBigBrainTime = new Brain();
	
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