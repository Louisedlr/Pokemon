#include <iostream>
#include <random>
#include "../probabilite/rand.hpp"

int Bernouilli_distribution(float p)
{
    float nb_rand = float(rand()) / float(RAND_MAX);
    if(nb_rand<=p)
    {
        return 1;
    }
    else{
        return 0;
    }
}

// float normal_distribution()
// {
    
// }
 

bool balanced_piece()
{
    if(Bernouilli_distribution(0.5)==1)
    {
        std::cout<<"PILE"<<std::endl;
        return true;
    }
    else{
        std::cout<<"FACE"<<std::endl;
        return false;

    }
}

bool balanced_dice()
{
    if(Bernouilli_distribution(1./6.)==1)
    {
        std::cout<<"WIN"<<std::endl;
        return true;
    }
    else{
        std::cout<<"LOSE"<<std::endl;
        return false;

    }
}

