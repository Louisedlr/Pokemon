#include "../include/Pokemon.hpp"
#include "../probabilite/rand.hpp"

Pokemon::Pokemon(std::string name, std::vector<std::string> types)
    : _name(name), _types(types)
{
}

void Pokemon::display_pokemon()
{
    std::cout << std::endl;
    std::cout << "Nom : " << get_name() << std::endl;
    std::cout << "PC : " << get_PC() << std::endl;
    std::cout << "IV : " << get_IV() << std::endl;
    if (get_shiny()) {
        std::cout << "ton pokomon est shiny" << std::endl;
    }
    std::cout << " Types : ";
    for (auto i : get_types()) {
        std::cout << i << ", ";
    }
}

void Pokemon::random_features()
{
    _PC    = Erlang_distribution(1, 5) * 10;
    _IV    = Poisson_dstribution(16);
    _shiny = Bernouilli_distribution(1 / 25);
}