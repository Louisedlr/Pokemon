// #include <iostream>

// int main()
// {
//     std::cout << "Hello World\n";
// }

#include <iostream>
#include "./probabilite/rand.hpp"
#include <string>
#include "./include/Player.hpp"
#include "./include/Pokemon.hpp"

int main()
{
    std::string name;
    std::cout << "Enter a name : "<< std::endl;
    std::cin>> name;
    Player player (name);
    std::vector<std::string> types(1,"plante");
    Pokemon bulbizarre("Bulbizarre",types);
    std::cout<<player.get_name()<<std::endl;
}