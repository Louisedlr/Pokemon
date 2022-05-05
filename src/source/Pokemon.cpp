#include "../include/Pokemon.hpp"
#include "../probabilite/rand.hpp"

Pokemon::Pokemon(std::string name, std::vector<std::string> types)
    : _name(name), _types(types)
{
}

void Pokemon::display_pokemon()
{
    std::cout << std::endl;
    std::cout << "Nom : " << _name << std::endl;
    std::cout << "PC : " << _PC << std::endl;
    std::cout << "IV : " << _IV << std::endl;
    if (_shiny) {
        std::cout << "ton pokomon est shiny" << std::endl;
    }
    std::cout << " Types : ";
    for (auto i : _types) {
        std::cout << i << ", ";
    }
}

void Pokemon::random_features()
{
    _PC    = 10;
    _IV    = 20;
    _shiny = balanced_piece();
}