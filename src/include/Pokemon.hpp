#pragma once
#include <iostream>
#include <string>
#include <vector>

class Pokemon {
private:
    std::string              _name;
    int                      _PC;
    int                      _IV;
    int                      _PV;
    bool                     _shiny;
    std::vector<std::string> _types;

public:
    Pokemon(std::string name, std::vector<std::string> types);
    ~Pokemon() = default;
    void                     set_PC(int PC) { _PC = PC; };
    void                     set_IV(int IV) { _IV = IV; };
    void                     set_PV(int PV) { _PV = PV; };
    void                     set_shiny(bool shiny) { _shiny = shiny; };
    void                     set_types(std::vector<std::string> types) { _types = types; }
    std::string              get_name() { return _name; }
    int                      get_PC() { return _PC; }
    int                      get_IV() { return _IV; }
    int                      get_PV() { return _PV; }
    bool                     get_shiny() { return _shiny; }
    std::vector<std::string> get_types() { return _types; }
    void                     display_pokemon();
    void                     random_features();
};
