#include "Harl.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
        std::cout << "./harl <level (debug, info, warning, error)>" << std::endl;
    else
    {
        //creation objet
        Harl obj;
        //declaration pointeur sur la fonction membre
        void (Harl::*pointeur)(std::string) = &Harl::complain;

        //appel de la fonction membre
        (obj.*pointeur)(argv[1]);
    }    
    
}