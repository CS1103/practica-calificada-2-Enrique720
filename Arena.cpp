//
// Created by enrique.sobrados on 10/05/2019.
//

#include "Arena.h"
vector<Fight*> Arena::get_fights() {
    return arena;
}
void Arena::run(Fight *a) {
    cout << "El gandor es " << a->get_winner() << " con un score de " << a->get_score();
}
Arena::Arena() {}
void Arena::run_all() {
    int p = arena.size();
    for(int i = 0; i < p; i++){
        run(arena[i]);
    }
}
void Arena::load_fights(string filename) {
    //gg profe
}