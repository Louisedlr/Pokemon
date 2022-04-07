#pragma once
#include <iostream>
#include <string>
#include <vector>

class Pokemon
{
private:
    std::string name;
    int PC;
    int IV;
    bool shiny;
    std::vector<std::string> types;
public:
    Pokemon(std::string name,std::vector<std::string> types);
    ~Pokemon() = default;
    void set_PC();
    void set_IV();
};


