#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include "Fighter.h"
#include "Fight.h"
#include "Defense.h"
#include "Defensas.h"
#include "Attack.h"
#include "Ataques.h"
#include "Arena.h"
#include <cassert>
using namespace std;
int main() {
    Fighter* a= new Fighter();
    Fighter* b = new Fighter();
    auto *defensa1 = new Elude();
    auto *defensa2 = new Shield();
    auto* ataque1 = new Punch();
    auto* ataque2 = new Firearm();
    auto* ataque3 = new Saber();
    auto* ataque4 = new Saber();
    auto* defensa3 = new Elude();
    auto* defensa4= new Armor();
    b->add_attack(ataque4);
    b->add_defense(defensa3);
    a->add_defense(defensa4);
    a->add_attack(ataque1);
    a->add_defense(defensa1);
    b->add_defense(defensa2);
    Fight* pelea = new Fight(a,b);
    Arena* arena = new Arena;
    assert(pelea->get_score() == 0);
    a->add_attack(ataque3);
    b->add_attack(ataque2);
    pelea = new Fight(a,b);
    assert(defensa1->defense()==1);
    assert(ataque3->attack() == 5);
    //cuando tienen dos defensas y dos atacques cada uno
    assert(pelea->get_score() == -5);
    //comprobamos que el ganador es el segundo luchador
    assert(pelea->get_winner() == pelea->get_peleador2());
}
