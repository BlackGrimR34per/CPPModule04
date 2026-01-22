/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 20:18:28 by yosherau          #+#    #+#             */
/*   Updated: 2026/01/22 14:01:29 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# define IDEAS_AMNT 100
# define EMPTY_STRING ""
# include <iostream>
# include <string>

class	Brain
{
	std::string ideas[IDEAS_AMNT];
	
	public:
		Brain();
		~Brain();
		Brain(const Brain &other);
		Brain 		&operator=(const Brain &other);
		void		set_idea(int index, std::string idea);
		void		set_ideas(std::string idea);
		std::string get_idea(int index) const;
};

#endif