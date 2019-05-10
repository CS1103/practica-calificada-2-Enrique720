//
// Created by enrique.sobrados on 10/05/2019.
//

#ifndef EXAMEN_FIGHT_H
#define EXAMEN_FIGHT_H

#include <iostream>
#include "Fighter.h"
#include <string>
using namespace std;
class Fight {
private:
    Fighter* a;
    Fighter* b;
    Fighter* winner;
    int score;
public:
    Fight( Fighter* peleador1, Fighter* peleador2);
    int get_score();
    string get_winner();
};


#endif //EXAMEN_FIGHT_H
