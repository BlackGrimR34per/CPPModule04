/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 15:56:30 by yosherau          #+#    #+#             */
/*   Updated: 2025/10/09 16:21:53 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
# define BRAIN_H

#include <string>
#include <iostream>

class Brain
{
	protected:
		std::string	ideas[100];
	
	public:
		Brain();
		~Brain();
		Brain(const Brain &original);
		Brain	&operator=(const Brain &original);
};

#endif
