#include "Harl.hpp"

Harl::Harl() {
    std::cout << "Constructeur appele : Harl" << std::endl;
}

Harl::~Harl() {
    std::cout << "Destructeur appele : Harl" << std::endl;
}

void Harl::debug( void ) {
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::complain( std::string level ) {
    if (level == "debug")
        debug();
    else
        std::cout << "faire les autres fonctions membres privees" << std::endl;
}