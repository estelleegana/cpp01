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

void Harl::info( void ) {
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning( void ) {
    std::cout << " think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error( void ) {
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain( std::string level ) {
    if (level == "debug")
        debug();
    else if (level == "info")
        info();
    else if (level == "warning")
        warning();
    else if (level == "error")
        error();
}