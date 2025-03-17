#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>//cin, cout, cerr

# define bRED "\033[1;31m"
# define bGREEN "\033[1;32m"
# define RESET "\033[0m"

class Harl {
private:
    //private member functions
	void debug( void );
    void info( void );
    void warning( void );
    void error( void );

public:
    //constructeur & destructeur
	Harl();//c
	~Harl();//d

    //public member function
    void complain( std::string level );
};

#endif