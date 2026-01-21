/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 14:02:36 by yosherau          #+#    #+#             */
/*   Updated: 2026/01/21 17:24:44 by yosherau         ###   ########.fr       */
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
		virtual ~WrongAnimal();
		WrongAnimal(std::string type);
		WrongAnimal(const WrongAnimal &original);
		std::string	getType() const;
		WrongAnimal	&operator=(const WrongAnimal &original);
		void	makeSound() const;
};

#endif