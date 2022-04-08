#include "../include/Map.hpp"
#include <fstream>
#include <iostream>
#include <string>
#define SIZE_COLUMN 10

Map::Map()
{
    _tab = load_map();
}

std::vector<std::vector<char> > Map::load_map()
{
    std::string                     filename("/Users/louisedelrieu/Documents/IMAC/IMAC 2/S4/maths/pokemon/src/map.txt");
    std::vector<char>               lines;
    std::string                     line;
    std::vector<std::vector<char> > tab(SIZE_COLUMN, std::vector<char>(SIZE_COLUMN));

    std::ifstream input_file(filename);
    if (!input_file.is_open()) {
        std::cerr << "Could not open the file - '"
                  << filename << "'" << std::endl;
    }

    while (getline(input_file, line)) {
        if (line == "255") {
            lines.push_back('*');
        }
        else {
            lines.push_back('|');
        }
        // lines.push_back(line);
    }

    // for (const auto &i : lines)
    //     std::cout << i << std::endl;

    int count = 0;
    for (size_t i = 0; i < SIZE_COLUMN; i++) {
        for (size_t j = 0; j < SIZE_COLUMN; j++) {
            tab[i][j] = lines[count];
            // std::cout << lines[count] << "  ";
            count++;
        }

        // std::cout << std::endl;
    }

    input_file.close();

    return tab;
}

void Map::draw_map()
{
    int count = 0;
    for (size_t i = 0; i < SIZE_COLUMN; i++) {
        for (size_t j = 0; j < SIZE_COLUMN; j++) {
            std::cout << _tab[i][j] << "  ";
            count++;
        }

        std::cout << std::endl;
    }
}
