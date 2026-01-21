/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 13:08:20 by yosherau          #+#    #+#             */
/*   Updated: 2026/01/21 16:51:50 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/WrongCat.hpp"

WrongCat::WrongCat():
	WrongAnimal("Wrong El Gatito")
{
	std::cout << "WrongCat's default constructor was called" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat's destructor was called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &original)
{
	this->type = original.type;
}

WrongCat	&WrongCat::operator=(const WrongCat &original)
{
	if (this != &original)
		this->type = original.type;
	return (*this);
}

void	WrongCat::makeSound(void) const
{
	std::cout << "WrongCat goes meow meow" << std::endl;
}