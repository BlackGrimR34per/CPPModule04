/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 14:14:11 by yosherau          #+#    #+#             */
/*   Updated: 2026/01/31 18:45:42 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Dog.hpp"
#include "../include/Cat.hpp"

# define ANIMALS_AMNT 4

int	main()
{
	Animal *array[ANIMALS_AMNT];

	for (int index = 0; index < ANIMALS_AMNT; index++)
	{
		if (index < ANIMALS_AMNT / 2)
			array[index] = new Dog();
		else
			array[index] = new Cat();
	}

	Dog	*dog = dynamic_cast<Dog*>(array[0]);
	dog->setAllIdeas("Chasing cats");
	Dog	*dogCopy = dynamic_cast<Dog*>(array[1]);
	dog->setIdea(99, "Eating bones");
	for (int index = 0; index < IDEAS_AMNT; index++)
		std::cout << dog->getIdea(index) << std::endl;
	std::cout << dogCopy->getIdea(0) << std::endl;

	
	for (int index = 0; index < ANIMALS_AMNT; index++)
		delete (array[index]);
}