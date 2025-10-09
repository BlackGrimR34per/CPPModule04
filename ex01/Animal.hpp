/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 14:02:36 by yosherau          #+#    #+#             */
/*   Updated: 2025/10/09 14:15:57 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
# define ANIMAL_H

# include <string>
# include <iostream>

class	Animal
{
	protected:
		std::string	type;

	public:
		Animal();
		~Animal();
		Animal(std::string type);
		Animal(const Animal &original);
		std::string	getType() const;
		Animal	&operator=(const Animal &original);
		virtual void	makeSound() const;
};

#endif