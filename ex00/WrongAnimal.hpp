/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 14:02:36 by yosherau          #+#    #+#             */
/*   Updated: 2025/10/09 14:19:34 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_H
# define WRONGANIMAL_H

# include <string>
# include <iostream>

class	WrongAnimal
{
	protected:
		std::string	type;

	public:
		WrongAnimal();
		~WrongAnimal();
		WrongAnimal(std::string type);
		WrongAnimal(const WrongAnimal &original);
		std::string	getType() const;
		WrongAnimal	&operator=(const WrongAnimal &original);
		void	makeSound() const;
};

#endif