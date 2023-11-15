/*
** EPITECH PROJECT, 2023
** my_bsq [WSL: Ubuntu-22.04]
** File description:
** main
*/

#include "BiggestSquare.hpp"

#include <iostream>
#include <memory>

int main(int ac, char **argv)
{
    std::unique_ptr<BiggestSquare> bsq;

    if (ac != 2)
        std::cout << "Please, specify a file" << std::endl;
    bsq = std::make_unique<BiggestSquare>(argv[1]);
    bsq->run();
    return 0;
}