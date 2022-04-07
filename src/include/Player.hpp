#pragma once
#include <vector>
#include <string>
#include <iostream>
#include "./Pokemon.hpp"

class Player
{
private:
    std::string name;
    std::vector<Pokemon> poke_bag;
    std::vector<int> coord;
public:
    Player(std::string name) : name(name){}
    ~Player() = default;
};


