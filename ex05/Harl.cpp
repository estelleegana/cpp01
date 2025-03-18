#include "Harl.hpp"

Harl::Harl()
{

    std::cout << bGREEN << "Constructor called" << RESET << std::endl;
}

Harl::~Harl()
{
    std::cout << bRED << "Destructor called" << RESET << std::endl;
}

void Harl::_debug( void )
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::_info( void )
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::_warning( void )
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::_error( void )
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain( std::string level )
{
    std::string options[4] = {"debug", "info", "warning", "error"};
    void (Harl::*ptr[4])() = {&Harl::_debug, &Harl::_info, &Harl::_warning, &Harl::_error};

    for (int i = 0; i < 4; i++)
    {
        if (options[i] == level)
            (this->*ptr[i])();
    }
}