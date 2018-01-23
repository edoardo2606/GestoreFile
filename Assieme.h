//
// Created by edoardo on 22/01/18.
#ifndef GESTOREFILE_ASSIEME_H
#define GESTOREFILE_ASSIEME_H

#include "Disegno.h"
#include <string>
#include <vector>
#include "Particolare.h"


using namespace std;

class Assieme {
private:
    int id;
    string nome;
    Disegno disegno;
    vector <Particolare> particolari;

public:
    int getId() const;

    const string &getNome() const;

    void setNome(const string &nome);

    const Disegno &getDisegno() const;

    void setDisegno(const Disegno &disegno);

    const vector<Particolare> &getParticolari() const;

    void addParticolare(const Particolare particolare);
};


#endif //GESTOREFILE_ASSIEME_H
