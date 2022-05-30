#include "../probabilite/rand.hpp"
#include <math.h>
#include <iostream>
#include <random>

int Bernouilli_distribution(float p)
{
    float nb_rand = float(rand()) / float(RAND_MAX);
    if (nb_rand <= p) {
        return 1;
    }
    else {
        return 0;
    }
}

// float normal_distribution()
// {

// }

bool balanced_piece()
{
    if (Bernouilli_distribution(0.5) == 1) {
        std::cout << "PILE" << std::endl;
        return true;
    }
    else {
        std::cout << "FACE" << std::endl;
        return false;
    }
}

bool balanced_dice()
{
    if (Bernouilli_distribution(1. / 6.) == 1) {
        std::cout << "WIN" << std::endl;
        return true;
    }
    else {
        std::cout << "LOSE" << std::endl;
        return false;
    }
}

int Geometric_distribution(float p)
{
    int x = 1;
    while (Bernouilli_distribution(p) == 0) {
        x += 1;
    }
    return x;
}

int Exponential_distribution(float lambda)
{
    float nb_rand = float(rand()) / float(RAND_MAX);
    return floor(-(1 / lambda) * log(nb_rand / lambda));
}

int Poisson_dstribution(float lambda)
{
    float nb_rand = float(rand()) / float(RAND_MAX);
    int   x       = 0;
    float y       = exp(-lambda);
    float z       = y; //on affecte à z la valeur F(0) de la fonction de répartition de la variable aléatoire en 0
    //fonction de répartition de la variable aléatoire en 0
    while (z < nb_rand) {
        x++;
        y = y * lambda / float(x); // y prend par récurrence la valeur de P(X=x)
        z += y;                    // z prend par récurrence la valeur de F(x)
                                   //on sort de la boucle quand F(x−1)<=p<F(x) p ayant bien une probabilité P(X=x)=F(x)−F(x−1) de tomber dans cet intervalle
    }
    return x;
}

int Erlang_distribution(float lambda, int k)
{
    int res = 0;
    for (int i = 0; i < k; i++) {
        res += Exponential_distribution(lambda);
    }

    return res;
}
