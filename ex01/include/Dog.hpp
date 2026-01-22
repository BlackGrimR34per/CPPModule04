/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 13:08:36 by yosherau          #+#    #+#             */
/*   Updated: 2026/01/22 16:55:23 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
# define DOG_H

# include "Animal.hpp"
# include "Brain.hpp"

class Dog: public Animal
{
	
	public:
		Brain	*itsBigBrainTime;
		Dog();
		~Dog();
		Dog(const Dog &original);
		Dog			&operator=(const Dog &original);
		void		setIdea(int index, std::string idea);
		void		setAllIdeas(std::string idea);
		std::string	getIdea(int index) const;
		void		makeSound() const;
};

#endif