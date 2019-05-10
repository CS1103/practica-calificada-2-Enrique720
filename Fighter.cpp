//
// Created by enrique.sobrados on 10/05/2019.
//

#include "Fighter.h"
Fighter::Fighter():name{""}{
}
void Fighter::add_attack(Attack *b) {
    ataque.push_back(b);
}
void Fighter::add_defense(Defense *a) {
    defensa.push_back(a);
}
int Fighter::attack() {
    int l = ataque.size();
    int contador = 0;
    for(int i = 0; i < l; i++)
    {
        contador = contador + ataque[i]->attack();
    }
    return contador;
}
int Fighter::defense() {
    int l = defensa.size();
    int contador = 0;
    for(int i = 0; i < l; i++)
    {
        contador = contador + defensa[i]->defense();
    }
    return contador;
}
string Fighter::get_name() {
    return name;
}