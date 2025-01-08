/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 16:21:24 by okapshai          #+#    #+#             */
/*   Updated: 2024/12/19 14:51:24 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_HPP
#define UTILS_HPP

#include <string>
#include <fstream>
#include <iostream>

#define RED "\033[0;31m"
#define GREEN "\033[0;32m"
#define BLUE "\033[0;34m"
#define YELLOW "\033[0;33m"
#define RESET "\033[0;0m"

bool	fileHandler(std::ifstream& in, std::ofstream& out, char **argv);
void	writeLine(std::ofstream& out, const std::string& buf, const std::string& ref, const std::string& rep);
void    writeInFile(std::ifstream& in, std::ofstream& out, const std::string& s1, const std::string& s2);
bool    isFileEmpty(std::ifstream& file);

#endif