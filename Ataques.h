//
// Created by enrique.sobrados on 10/05/2019.
//

#ifndef EXAMEN_ATAQUES_H
#define EXAMEN_ATAQUES_H

#include "Attack.h"
class Punch: public Attack {
public:
    Punch();
};

class Saber: public Attack {
public:
    Saber();
};

class Firearm: public Attack {
public:
    Firearm();
};


#endif //EXAMEN_ATAQUES_H
