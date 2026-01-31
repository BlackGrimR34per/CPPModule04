/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 13:08:20 by yosherau          #+#    #+#             */
/*   Updated: 2026/01/31 17:05:53 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Dog.hpp"

Dog::Dog():
	Animal("Doge")
{
	itsBigBrainTime = new Brain();
	std::cout << "Dog's default constructor was called" << std::endl;
}

Dog::~Dog()
{
	delete itsBigBrainTime;
	std::cout << "Dog's destructor was called" << std::endl;
}

Dog::Dog(const Dog &original):
	Animal(original), itsBigBrainTime(NULL)
{
	std::cout << "Dog's copy constructor was called" << std::endl;
	this->itsBigBrainTime = new Brain(*original.itsBigBrainTime);
}

Dog	&Dog::operator=(const Dog &original)
{
	std::cout << "Dog's copy assignment operator was called" << std::endl;
	if (this != &original)
	{
		Animal::operator=(original);
		*this->itsBigBrainTime = *original.itsBigBrainTime;
	}
	return (*this);
}

void Dog::setIdea(int index, std::string idea)
{
	itsBigBrainTime->set_idea(index, idea);
}

void Dog::setAllIdeas(std::string idea)
{
	itsBigBrainTime->set_ideas(idea);
}

std::string Dog::getIdea(int index) const
{
	return (itsBigBrainTime->get_idea(index));
}

void	Dog::makeSound(void) const
{
	std::cout << "Dog goes bark bark" << std::endl;
}