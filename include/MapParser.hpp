/*
** EPITECH PROJECT, 2023
** my_bsq [WSL: Ubuntu-22.04]
** File description:
** MapParser
*/

#ifndef MAPPARSER_HPP_
#define MAPPARSER_HPP_

#include <string>
#include <vector>

class MapParser {
    public:
        MapParser();
        ~MapParser();

        void fillMap(std::vector<std::vector<unsigned int>> &, std::string const &, unsigned int &);
    private:
};

#endif /* !MAPPARSER_HPP_ */
