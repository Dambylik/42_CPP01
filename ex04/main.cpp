/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 16:12:45 by okapshai          #+#    #+#             */
/*   Updated: 2024/12/19 14:06:36 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"

int main(int argc, char **argv) {
	
    if (argc != 4) {
		
        std::cerr << RED << argv[0] << ": usage: <filename> <string1> <string2>" << RESET << std::endl;
        return (1);
    }

    std::string s1 = argv[2];
    std::string s2 = argv[3];
    std::ifstream ifs;
    std::ofstream ofs;

    if (!fileHandler(ifs, ofs, argv))
		  return (1);

    writeInFile(ifs, ofs, s1, s2);

    ifs.close();
    ofs.close();

    return (0);
}
