#pragma once
#include <vector>
#include <string>
#include <iostream>
#include "./Pokemon.hpp"

class Player
{
private:
    std::string _name;
    std::vector<Pokemon> _poke_bag;
    std::vector<int> _coord;
public:
    Player(std::string name) : _name(name){}
    ~Player() = default;
    void set_poke_bag(std::vector<Pokemon> poke_bag){_poke_bag = poke_bag;}
    std::string get_name(){return _name;}
    std::vector<Pokemon> get_poke_bag(){return _poke_bag;}
    std::vector<int> get_coord(){return _coord;}
    void add_pokemon(Pokemon pokemon);
};


