cmake_minimum_required(VERSION 3.9)
project(rush00)

set(CMAKE_CXX_STANDARD 11)

add_executable(rush00
        main.cpp Map.cpp Map.hpp Player.cpp Player.hpp Bot1.cpp Bot2.cpp Bot3.cpp
        Bot1.hpp Bot2.hpp Bot3.hpp Enemy.cpp Enemy.hpp Bullet.cpp Bullet.hpp
        )
