#include "Harl.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
        std::cout << "./harl <level (debug, info, warning, error)>" << std::endl;
    else
    {
        Harl mec;
        mec.complain(argv[1]);
    }    
}