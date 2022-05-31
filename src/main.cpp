
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
    int              res   = 0;
    int              count = 0;
    std::vector<int> res_bernouilli_3;
    for (int i = 0; i < 200; i++) {
        res = Bernouilli_distribution(1. / 3.);
        res_bernouilli_3.push_back(res);
    }

    std::string name = "lou";
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << "Entrez votre nom de dresseur : " << std::endl
              << std::endl;
    ;
    std::cin >> name;
    std::cout << std::endl;
    Player player(name);
    std::cout << std::endl;

    Map map;

    std::vector<Pokemon> pokedex = fill_pokedex();
    // std::cout << "taille " << pokedex.size() << std::endl;
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
        std::cout << std::endl;
        std::cout << std::endl;
        std::cout << std::endl;
        map.reset_map_with_player();
        map.set_player_coord(player.get_coord());
        map.draw_map();
        std::cout << std::endl;
        std::cout << std::endl;
        std::cout << std::endl;
        std::cout << "Enter en input (s pour avancer, d pour aller à droite, s pour aller à gauche, z pour reculer et i pour ouvrir son Poke Bag)" << std::endl;
        std::cout << std::endl;
        std::cin >> input;
        // std::cout << input << std::endl;

        // player.player_move(input);

        if (input == 'i') {
            std::cout << std::endl;
            player.display_poke_bag();
            std::cout << std::endl;
            std::cout << "Pressez p pour quitter le Poke Bag" << std::endl;
            std::cout << std::endl;
            std::cout << std::endl;
            std::cout << std::endl;
            std::cin >> input;
        }
        else if (input == 'x') {
            return 0;
        }
        else {
            if (player.player_can_move(map, input)) {
                if (Bernouilli_distribution(0.5)) {
                    std::cout << std::endl;
                    std::cout << std::endl;
                    std::cout << std::endl;
                    std::cout << "Vous êtes tombé sur un Pokémon" << std::endl;
                    char y_n;
                    std::cout << std::endl;
                    std::cout << std::endl;
                    int index = Exponential_distribution(0.2);
                    while (index > 31) {
                        index = Exponential_distribution(0.2);
                    }
                    std::cout << "C'est un " << pokedex[index].get_name() << std::endl;
                    std::cout << std::endl;
                    std::cout << std::endl;
                    std::cout << "Voulez vous attraper ce Pokémon ? (y/n)" << std::endl;
                    std::cin >> y_n;
                    std::cout << std::endl;
                    std::cout << std::endl;
                    std::cout << std::endl;
                    if (y_n == 'y' && res_bernouilli_3[count] == 1) {
                        std::cout << "Bravo, vous avez attrapé ce Pokémon ! " << std::endl;
                        std::cout << std::endl;
                        std::cout << std::endl;
                        std::cout << std::endl;

                        //int index = abs(Exponential_distribution(0.15));

                        pokedex[index].random_features();
                        player.add_pokemon(pokedex[index]);
                    }
                    else {
                        std::cout << "Dommage, vous n'avez pas réussi à attraper le Pokemon" << std::endl;
                        std::cout << std::endl;
                        std::cout << std::endl;
                        std::cout << std::endl;
                    }
                    count++;
                    if (count == 201) {
                        count = 0;
                    }
                }
                map.set_player_coord(player.get_coord());
            }
        }
    }
}