//
// Created by enrique.sobrados on 10/05/2019.
//

#ifndef EXAMEN_ARENA_H
#define EXAMEN_ARENA_H

#include "Fight.h"
#include <vector>
#include <string>
#include <fstream>
using namespace std;
class Arena {
private:
    vector < Fight*> arena;
public:
    Arena();
    void run(Fight* a);
    void load_fights(string filename);
    void run_all();
    vector<Fight*> get_fights();
};


#endif //EXAMEN_ARENA_H
