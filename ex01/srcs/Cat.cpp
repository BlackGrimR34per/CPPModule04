/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 13:08:20 by yosherau          #+#    #+#             */
/*   Updated: 2026/01/31 17:22:31 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cat.hpp"

Cat::Cat():
	Animal("El Gatito")
{
	itsBigBrainTime = new Brain();
	std::cout << "Cat's default constructor was called" << std::endl;
}

Cat::~Cat()
{
	delete itsBigBrainTime;
	std::cout << "Cat's destructor was called" << std::endl;
}

Cat::Cat(const Cat &original):
	Animal(original), itsBigBrainTime(NULL)
{
	std::cout << "Cat's copy constructor was called" << std::endl;
	this->itsBigBrainTime = new Brain(*original.itsBigBrainTime);
}

Cat	&Cat::operator=(const Cat &original)
{
	std::cout << "Cat's copy assignment operator was called" << std::endl;
	if (this != &original)
	{
		Animal::operator=(original);
		*this->itsBigBrainTime = *original.itsBigBrainTime;
	}
	return (*this);
}

void	Cat::setIdea(int index, std::string idea)
{
	itsBigBrainTime->set_idea(index, idea);
}

void	Cat::setAllIdeas(std::string idea)
{
	itsBigBrainTime->set_ideas(idea);
}

std::string	Cat::getIdea(int index) const
{
	return (itsBigBrainTime->get_idea(index));
}

void	Cat::makeSound(void) const
{
	std::cout << "Cat goes meow meow" << std::endl;
}