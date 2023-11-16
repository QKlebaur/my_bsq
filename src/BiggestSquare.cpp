/*
** EPITECH PROJECT, 2023
** my_bsq [WSL: Ubuntu-22.04]
** File description:
** BiggestSquare
*/

#include "BiggestSquare.hpp"

#include <iostream>
#include <climits>

BiggestSquare::BiggestSquare(std::string const &filePath) : _filePath(filePath)
{
    _biggestSquareSize = 0;
}

BiggestSquare::~BiggestSquare()
{
}

void BiggestSquare::run()
{
    _mapParser.fillMap(_map, _filePath, _mapSize);
    bsqAlgorithm();
    putSquare();
    displayMap();
}

void BiggestSquare::putSquare()
{
    for (unsigned int i = 0; i < _biggestSquareSize; ++i) {
        for (unsigned int j = 0; j < _biggestSquareSize; ++j) {
            _map[_biggestSquarePosition.first - i][_biggestSquarePosition.second - j] = UINT_MAX;
        }
    }
}

void BiggestSquare::bsqAlgorithm()
{
    unsigned int min;

    for (unsigned int i = 1; i < _mapSize; ++i) {
        for (unsigned int j = 1; j < _mapSize; ++j) {
            if (_map[i][j] != 0) {
                min = _map[i][j - 1];
                min = std::min(_map[i - 1][j], min);
                min = std::min(_map[i - 1][j - 1], min);
                min += 1;
                _map[i][j] = min;
                if (min > _biggestSquareSize) {
                    _biggestSquareSize = min;
                    _biggestSquarePosition = {i, j};
                }
            }
        }
    }
}

void BiggestSquare::displayMap()
{
    std::string str(_mapSize * _mapSize + _mapSize, 0);
    long int indexStr = 0;

    for (unsigned int i = 0; i < _mapSize; ++i) {
        for (unsigned int j = 0; j < _mapSize; ++j) {
            if (_map[i][j] == 0)
                str[indexStr] = 'o';
            else if (_map[i][j] == UINT_MAX)
                str[indexStr] = 'x';
            else
                str[indexStr] = '.';
            ++indexStr;
        }
        str[indexStr++] = '\n';
    }
    std::cout << str;
}