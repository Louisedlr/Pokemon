#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "./Map.hpp"
#include "./Pokemon.hpp"

class Player {
private:
    std::string          _name;
    std::vector<Pokemon> _poke_bag;
    std::vector<int>     _coord;

public:
    Player(std::string name)
        : _name(name), _coord(std::vector<int>(2, 0)) {}
    ~Player() = default;
    void set_poke_bag(std::vector<Pokemon> poke_bag)
    {
        _poke_bag = poke_bag;
    }
    std::string get_name()
    {
        return _name;
    }
    std::vector<Pokemon> get_poke_bag()
    {
        return _poke_bag;
    }
    std::vector<int> get_coord()
    {
        return _coord;
    }
    void add_pokemon(Pokemon pokemon);
    void player_move(char input);
    bool player_can_move(Map map, char input);
};
