//
// Created by enrique.sobrados on 10/05/2019.
//

#include "Fight.h"
Fight::Fight(Fighter *peleador1, Fighter *peleador2): a{peleador1},b{peleador2}{
        if(a->defense()-b->attack() > b->defense() -a->attack()){
                winner = a;
        }
        else if(b->defense()-a->attack() > a->defense() -b->attack()){
                winner = b;
        }
        else{
                winner = nullptr;
        }
        score= a->defense()-b->attack() -( b->defense() -a->attack());


}
int Fight::get_score() {
        return score;
}
string Fight::get_winner_name() {
        return winner->get_name();
}
Fighter* Fight::get_peleador1() {
    return a;
}

Fighter* Fight::get_peleador2() {
    return b;
}

Fighter* Fight::get_winner() {
    return winner;
}
