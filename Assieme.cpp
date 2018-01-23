//
// Created by edoardo on 22/01/18.
//

#include "Assieme.h"



void Assieme::setNome(const string &nome) {
    Assieme::nome = nome;

}

const string &Assieme::getNome() const {
    return Assieme::nome;
}

int Assieme::getId() const {
    return Assieme::id;
}

const Disegno &Assieme::getDisegno() const {
    return Assieme::disegno;
}

void Assieme::setDisegno(const Disegno &disegno) {
    Assieme::disegno = disegno;
}

const vector<Particolare> &Assieme::getParticolari() const {
    return Assieme::particolari;

}

void Assieme::addParticolare(const Particolare particolare) {
    Assieme::particolari.push_back(particolare);
}

