/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 13:08:36 by yosherau          #+#    #+#             */
/*   Updated: 2026/01/31 18:51:56 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
# define CAT_H

# include "Animal.hpp"
# include "Brain.hpp"

class Cat: public Animal
{
	Brain	*itsBigBrainTime;

	public:
		Cat();
		~Cat();
		Cat(const Cat &original);
		Cat			&operator=(const Cat &original);
		void		setIdea(int index, std::string idea);
		void		setAllIdeas(std::string idea);
		std::string	getIdea(int index) const;
		void		makeSound() const;
};

#endif