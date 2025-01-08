/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 18:09:12 by okapshai          #+#    #+#             */
/*   Updated: 2024/12/19 15:13:18 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"

bool	fileHandler(std::ifstream& in, std::ofstream& out, char **argv) {
	
    in.open(argv[1]);
    if (!in.is_open()) {
		
        std::cerr << RED << argv[0] << ": Bad input file. Check if the file exists and has read permissions." << RESET << std::endl;
        return (false);
	}

    if (isFileEmpty(in)) {
        
        std::cerr << RED << argv[0] << ": Input file is empty." << RESET << std::endl;
        in.close();
        return (false);
    }
	
	out.open((std::string(argv[1]) + ".replace").c_str());
    if (!out.is_open()) {
		
        std::cerr << RED << argv[0] << ": Bad output file. Check file permissions." << RESET << std::endl;
        in.close();
        return (false);
    }
    return (true);
}

bool    isFileEmpty(std::ifstream& file) {
    
    return (file.peek() == std::ifstream::traits_type::eof());
}

void	writeLine(std::ofstream& out, const std::string& current_line, const std::string& string_to_repace, const std::string& replacement) {
	
    std::size_t oldpos = 0;
    std::size_t pos = 0;

	while ((pos = current_line.find(string_to_repace, oldpos)) != std::string::npos) {
        
        out << current_line.substr(oldpos, pos - oldpos);
        out << replacement;
        oldpos = pos + string_to_repace.length();
    }
    out << current_line.substr(oldpos);
}

void    writeInFile(std::ifstream& in, std::ofstream& out, const std::string& s1, const std::string& s2) {
    
    std::string buf;
    while (std::getline(in, buf)) {
        
        writeLine(out, buf, s1, s2);
        if (!in.eof()) out << '\n';
    }
}
