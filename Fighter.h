//
// Created by enrique.sobrados on 10/05/2019.
//

#ifndef EXAMEN_FIGHTER_H
#define EXAMEN_FIGHTER_H

#include "Attack.h"
#include "Defense.h"
#include <vector>
#include <fstream>
using namespace std;
class Fighter{
private:

    string name;
    vector <Defense*> defensa;
    vector <Attack*> ataque;
public:
    void add_defense(Defense* a);
    void add_attack(Attack* b);
    Fighter();
    int attack();
    int defense();
    string get_name();
};


#endif //EXAMEN_FIGHTER_H
