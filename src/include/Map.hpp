#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <vector>

class Map {
private:
    std::vector<std::vector<char> > _tab;
    std::vector<std::vector<char> > _map_with_player;

public:
    Map();
    ~Map() = default;
    std::vector<std::vector<char> > load_map();
    void                            draw_map();
    void                            set_player_coord(std::vector<int> coord);
    std::vector<std::vector<char> > get_map() { return _tab; }
    std::vector<std::vector<char> > get_map_with_player() { return _map_with_player; }
    void                            reset_map_with_player();
};