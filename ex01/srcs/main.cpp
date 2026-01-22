/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 14:14:11 by yosherau          #+#    #+#             */
/*   Updated: 2026/01/22 17:28:02 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Dog.hpp"
#include "../include/Cat.hpp"

int	main()
{
	Animal *array[100];

	for (int index = 0; index < IDEAS_AMNT; index++)
	{
		if (index < 50)
			array[index] = new Dog();
		else
			array[index] = new Cat();
	}
	for (int index = 0; index < IDEAS_AMNT; index++)
		delete (array[index]);
}