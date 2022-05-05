#include "../include/Player.hpp"

void Player::add_pokemon(Pokemon pokemon)
{
    _poke_bag.push_back(pokemon);
}

void Player::player_move(char input)
{
    switch (input) {
    case 'z':
        _coord[1]--;
        break;
    case 's':
        _coord[1]++;
        break;
    case 'd':
        _coord[0]++;
        break;
    case 'q':
        _coord[0]--;
        break;

    default:
        std::cout << "Sorry I don't know that command!\n";
        break;
    }
    std::cout << _coord[0] << " " << _coord[1] << std::endl;
}

bool Player::player_can_move(Map map, char input)
{
    switch (input) {
    case 'z':
        if (map.get_map()[_coord[1] - 1][_coord[0]] == '|') {
            std::cout << " You can't go here." << std::endl;
            return false;
        }
        else {
            _coord[1]--;
            return true;
        }

        break;
    case 's':
        if (map.get_map()[_coord[1] + 1][_coord[0]] == '|') {
            std::cout << " You can't go here." << std::endl;
            return false;
        }
        else {
            _coord[1]++;
            return true;
        }

        break;
    case 'd':
        if (map.get_map()[_coord[1]][_coord[0] + 1] == '|') {
            std::cout << " You can't go here." << std::endl;
            return false;
        }
        else {
            _coord[0]++;
            return true;
        }
        break;
    case 'q':
        if (map.get_map()[_coord[1]][_coord[0] - 1] == '|') {
            std::cout << " You can't go here." << std::endl;
            return false;
        }
        else {
            _coord[0]--;
            return true;
        }
        break;

    case 'i':
        display_poke_bag();

    default:
        std::cout << "Sorry I don't know that command!\n";
        return false;
        break;
    }
}

void Player::display_poke_bag()
{
    for (auto i : _poke_bag) {
        i.display_pokemon();
        std::cout << std::endl;
    }
}