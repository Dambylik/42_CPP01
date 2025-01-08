/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 13:09:19 by okapshai          #+#    #+#             */
/*   Updated: 2024/12/18 13:29:08 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int main( void ) {

    std::string string = "HI THIS IS BRAIN";
    std::string* stringPTR = &string;
    std::string& stringREF = string;

    std::cout << "memory address of the string variable: " << YELLOW 
                << &string << RESET << std::endl;
    std::cout << "memory address held by stringPTR: " << RED 
                << stringPTR << RESET << std::endl;
    std::cout << "memory address held by stringREF: " << GREEN 
                << &stringREF << RESET << std::endl;
    
    std::cout << "---------------------------------- " << std::endl;
    
    std::cout << "value of the string variable: " << YELLOW 
                << string << RESET << std::endl;
    std::cout << "value pointed to by stringPTR: " << RED 
                << *stringPTR << RESET << std::endl;
    std::cout << "value pointed to by stringREF: " << GREEN 
                << stringREF << RESET << std::endl;
}