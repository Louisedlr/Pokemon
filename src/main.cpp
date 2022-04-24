
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

    map.reset_map_with_player();
    map.set_player_coord(player.get_coord());
    map.draw_map();

    for (int i = 0; i < 15; i++) {
        char input;
        std::cout << "Enter en input " << std::endl;
        std::cin >> input;
        std::cout << input << std::endl;

        map.reset_map_with_player();
        // player.player_move(input);

        if (player.player_can_move(map, input)) {
            if (balanced_dice()) {
                Pokemon pokemon1("pokemon", types);
                std::cout << "Vous êtes tombé sur un pokemon" << std::endl;
                char y_n;
                std::cout << "Voulez vous attraper le pokemon ? (y/n)" << std::endl;
                std::cin >> y_n;
                if (y_n == 'y') {
                    std::cout << "vous avez reussi" << std::endl;
                }
            }
            map.set_player_coord(player.get_coord());
            map.draw_map();
        }
    }
}