cmake_minimum_required(VERSION 3.9)
project(cpp)

set(CMAKE_CXX_STANDARD 98)

add_executable(cpp d00/ex00/megaphone.cpp d00/ex00/megaphone.cpp
        d00/ex01/main.cpp d00/ex01/Contacts.hpp d00/ex01/Contacts.cpp
        d01/ex00/Pony.cpp d01/ex00/main.cpp d01/ex00/Pony.hpp d00/ex02/Account.class.cpp d01/ex01/ex01.cpp
        d01/ex02/Zombie.cpp d01/ex02/Zombie.hpp d01/ex02/ZombieEvent.cpp d01/ex02/ZombieEvent.hpp d01/ex02/main.cpp
        d01/ex03/Zombie.cpp d01/ex03/Zombie.hpp d01/ex03/ZombieHorde.cpp d01/ex03/ZombieHorde.hpp d01/ex03/main.cpp d01/ex04/ex04.cpp
        d01/ex05/Brain.cpp d01/ex05/Brain.hpp d01/ex05/Human.cpp d01/ex05/Human.hpp d01/ex05/main.cpp d01/ex06/Weapon.cpp
        d01/ex06/Weapon.hpp d01/ex06/HumanA.cpp d01/ex06/HumanA.hpp d01/ex06/HumanB.cpp d01/ex06/HumanB.hpp d01/ex06/main.cpp
        d01/ex07/trust.cpp d02/ex00/Fixed.class.cpp d02/ex00/Fixed.class.hpp
        d02/ex01/Fixed.class.hpp d02/ex01/Fixed.class.cpp
        d02/ex02/Fixed.class.hpp d02/ex02/Fixed.class.cpp d03/ex00/FragTrap.cpp d03/ex00/FragTrap.hpp d03/ex00/main.cpp
        d03/ex01/FragTrap.cpp d03/ex01/FragTrap.hpp d03/ex01/main.cpp d03/ex01/ScavTrap.cpp d03/ex01/ScavTrap.hpp
        d03/ex02/FragTrap.cpp d03/ex02/FragTrap.hpp d03/ex02/main.cpp d03/ex02/ScavTrap.cpp d03/ex02/ScavTrap.hpp d03/ex02/ClapTrap.cpp d03/ex02/ClapTrap.hpp
        )