
#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include "./include/Map.hpp"
#include "./include/Player.hpp"
#include "./include/Pokemon.hpp"
#include "./include/pokedex.hpp"
#include "./probabilite/rand.hpp"

int main()
{
    // int max = 0;
    // for (int i = 0; i < 500; i++) {
    //     if (max < Exponential_distribution(0.15)) {
    //         max = Exponential_distribution(0.15);
    //     }
    //     std::cout << Exponential_distribution(0.15) << "    ";
    // }
    // std::cout << "test exp  " << max << std::endl;

    std::string name = "lou";
    std::cout << "Enter a name : " << std::endl;
    std::cin >> name;
    Player player(name);

    Map map;

    std::vector<Pokemon> pokedex = fill_pokedex();
    std::cout << "taille " << pokedex.size() << std::endl;
    // Pokemon              pokemon1("pokemon1", types);
    // pokemon_dispo.push_back(pokemon1);
    // Pokemon pokemon2("pokemon2", types);
    // pokemon_dispo.push_back(pokemon2);
    // Pokemon pokemon3("pokemon3", types);
    // pokemon_dispo.push_back(pokemon3);
    // Pokemon pokemon4("pokemon4", types);
    // pokemon_dispo.push_back(pokemon4);
    // map.reset_map_with_player();
    // map.set_player_coord(player.get_coord());
    // map.draw_map();

    char input = 'a';
    while (input != 'x') {
        input = 'a';
        map.reset_map_with_player();
        map.set_player_coord(player.get_coord());
        map.draw_map();
        std::cout << "Enter en input " << std::endl;
        std::cin >> input;
        std::cout << input << std::endl;

        // player.player_move(input);

        if (input == 'i') {
            player.display_poke_bag();
            std::cout << "Press p pour quitter le pokebag" << std::endl;
            std::cin >> input;
        }
        else if (input == 'x') {
            return 0;
        }
        else {
            if (player.player_can_move(map, input)) {
                if (Bernouilli_distribution(0.5)) {
                    std::cout << "Vous êtes tombé sur un pokemon" << std::endl;
                    char y_n;
                    std::cout << "Voulez vous attraper le pokemon ? (y/n)" << std::endl;
                    std::cin >> y_n;
                    if (y_n == 'y' & Bernouilli_distribution(0.5) == 1) {
                        std::cout << "vous avez reussi" << std::endl;

                        int index = abs(Exponential_distribution(0.15));

                        pokedex[index].random_features();
                        player.add_pokemon(pokedex[index]);
                    }
                    else {
                        std::cout << "Vous n'avez pas attrapé le Pokemon" << std::endl;
                    }
                }
                map.set_player_coord(player.get_coord());
            }
        }
    }
}