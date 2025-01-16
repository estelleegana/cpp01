#include "Harl.hpp"

int main()
{
    //creation objet
    Harl obj;
    //declaration pointeur sur la fonction membre
    void (Harl::*pointeur)(std::string) = &Harl::complain;

    //appel de la fonction membre
    (obj.*pointeur)("debug");
}