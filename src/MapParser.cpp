/*
** EPITECH PROJECT, 2023
** my_bsq [WSL: Ubuntu-22.04]
** File description:
** MapParser
*/

#include "MapParser.hpp"

#include <fstream>
#include <iostream>

MapParser::MapParser()
{
}

MapParser::~MapParser()
{
}

void MapParser::fillMap(std::vector<std::vector<unsigned int>> &map, std::string const &filePath, unsigned int &mapSize)
{
    std::ifstream file(filePath);
    std::string line;
    unsigned int indexX = 0;
    unsigned int indexY = 0;
    char c;

    std::getline(file, line);
    mapSize = std::atoi(line.c_str());
    map.insert(map.begin(), mapSize, {});
    map[indexY].insert(map[indexY].begin(), mapSize, {});

    while (file)
    {
        c = file.get();
        if (c == '.') {
            map[indexY][indexX] = 1;
        }
        else if (c == 'o') {
            map[indexY][indexX] = 0;
        }
        else if (c == '\n') {
            ++indexY;
            if (indexY < mapSize)
                map[indexY].insert(map[indexY].begin(), mapSize, {});
            indexX = -1;
        }
        ++indexX;
    }
}