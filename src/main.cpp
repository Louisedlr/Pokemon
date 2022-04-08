
#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include "./include/Map.hpp"
#include "./include/Player.hpp"
#include "./include/Pokemon.hpp"
#include "./probabilite/rand.hpp"

int main()
{
    std::string name;
    std::cout << "Enter a name : " << std::endl;
    std::cin >> name;
    Player                   player(name);
    std::vector<std::string> types(1, "plante");
    Pokemon                  bulbizarre("Bulbizarre", types);
    player.add_pokemon(bulbizarre);

    std::cout << player.get_name() << std::endl;
    std::cout << player.get_poke_bag()[0].get_name() << std::endl;

    Map map;
    map.draw_map();
}