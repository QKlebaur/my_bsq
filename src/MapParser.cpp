/*
** EPITECH PROJECT, 2023
** my_bsq [WSL: Ubuntu-22.04]
** File description:
** MapParser
*/

#include "MapParser.hpp"

#include <fstream>

MapParser::MapParser()
{
}

MapParser::~MapParser()
{
}

void fillMap(std::vector<std::vector<unsigned int>> &map, std::string const &filePath)
{
    std::ifstream file(filePath);
    std::string line;
    int indexX = 0;
    int indexY = 0;
    int size = 0;

    std::getline(file, line);
    size = std::atoi(line.c_str());
    map.insert(map.begin(), size, {});
    map[indexY].insert(map[indexY].begin(), size, {});

    while (file)
    {
        char c = file.get();
        if (c == '.')
            map[indexY][indexX] = 1;
        else if (c == 'o')
            map[indexY][indexX] = 0;
        else if (c == '\n') {
            ++indexY;
            map[indexY].insert(map[indexY].begin(), size, {});
            indexX = 0;
        }
        ++indexX;
    }
}