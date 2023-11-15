/*
** EPITECH PROJECT, 2023
** my_bsq [WSL: Ubuntu-22.04]
** File description:
** BiggestSquare
*/

#include "BiggestSquare.hpp"

BiggestSquare::BiggestSquare(std::string const &filePath) : _filePath(filePath)
{
}

BiggestSquare::~BiggestSquare()
{
}

void BiggestSquare::run()
{
    _mapParser.fillMap(_map, _filePath);
}
