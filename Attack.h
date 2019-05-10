//
// Created by enrique.sobrados on 10/05/2019.
//

#ifndef EXAMEN_ATTACK_H
#define EXAMEN_ATTACK_H


class Attack {
protected:
    int power;
public:
    Attack(int i);
    virtual int attack();
};


#endif //EXAMEN_ATTACK_H
