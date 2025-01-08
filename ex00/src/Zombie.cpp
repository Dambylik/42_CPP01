#include "Zombie.hpp"

Zombie::		Zombie( void ): _name("Zombie") {

	std::cout << YELLOW << this->_name << " created..." << RESET << std::endl;
}

Zombie::		~Zombie() {

	std::cout << RED << this->_name << " destroyed..." << RESET << std::endl;
}

void			Zombie::announce( void) const {
	
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

 void			Zombie::setName( std::string const &str)  {

	this->_name = str;

} 