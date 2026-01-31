/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 20:43:58 by yosherau          #+#    #+#             */
/*   Updated: 2026/01/31 18:45:48 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain's default constructor was called" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain's destructor was called" << std::endl;
}

Brain::Brain(const Brain &other)
{
	std::cout << "Brain's copy constructor was called" << std::endl;
	if (this == &other)
		return ;
	for (int index = 0; index < IDEAS_AMNT; index++)
		this->ideas[index] = other.ideas[index];
}

Brain &Brain::operator=(const Brain &other)
{
	std::cout << "Brain's copy assignment operator was called" << std::endl;
	if (this != &other)
	{
		for (int index = 0; index < IDEAS_AMNT; index++)
			this->ideas[index] = other.ideas[index];
	}
	return (*this);
}

void Brain::set_idea(int index, std::string idea)
{
	if (idea.empty())
		std::cout << "Idea's can't be empty" << std::endl;
	else if (index < 0 || index >= IDEAS_AMNT)
		std::cout << "Index specified is of an invalid range" << std::endl;
	else
		this->ideas[index] = idea; 
}

void Brain::set_ideas(std::string idea)
{
	for (int index = 0; index < IDEAS_AMNT; index++)
		this->set_idea(index, idea);
}

std::string	Brain::get_idea(int index) const
{
	if (index < 0 || index >= IDEAS_AMNT - 1)
	{
		std::cout << "Index specified is of an invalid range" << std::endl;
		return (EMPTY_STRING);
	}
	else
		return (this->ideas[index]);
}