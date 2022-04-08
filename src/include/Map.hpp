#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <vector>

class Map {
private:
    std::vector<std::vector<char> > _tab;

public:
    Map();
    ~Map() = default;
    std::vector<std::vector<char> > load_map();
    void                            draw_map();
};