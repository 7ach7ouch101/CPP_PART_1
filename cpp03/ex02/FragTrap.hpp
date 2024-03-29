#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

Class FragTrap : public ClapTrap
{
    public:
        FragTrap();
        FragTrap(std::string name);
        FragTrap(const FragTrap &obj);
        FragTrap &operator=(const FragTrap &obj);
        void highFivesGuys(void);
        void attack(std::string const & target);
        ~FragTrap();
};

#endif