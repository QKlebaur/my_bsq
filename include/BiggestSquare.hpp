/*
** EPITECH PROJECT, 2023
** my_bsq [WSL: Ubuntu-22.04]
** File description:
** BiggestSquare
*/

#ifndef BIGGESTSQUARE_HPP_
#define BIGGESTSQUARE_HPP_

#include "MapParser.hpp"

#include <vector>
#include <string>
#include <utility>

class BiggestSquare {
    public:
        BiggestSquare(std::string const &);
        ~BiggestSquare();

        void run();

    private:
        void displayMap();
        void bsqAlgorithm();
        void putSquare();

        std::vector<std::vector<unsigned int>> _map;
        MapParser _mapParser;
        std::string const _filePath;
        std::pair<unsigned int, unsigned int> _biggestSquarePosition;
        unsigned int _mapSize;
        unsigned int _biggestSquareSize;
};

#endif /* !BIGGESTSQUARE_HPP_ */
