//
// Created by edoardo on 22/01/18.
//


#include "Disegno.h"


int Disegno::getId() const {
    return id;
}

const string &Disegno::getPath() const {
    return path;
}

void Disegno::setPath(const string &path) {
    Disegno::path = path;
}

const string &Disegno::getDescrizione() const {
    return descrizione;
}

void Disegno::setDescrizione(const string &descrizione) {
    Disegno::descrizione = descrizione;
}

const vector<Particolare> &Disegno::getParticolari() const {
    return particolari;
}

const Assieme &Disegno::getAssieme() const {
    return assieme;
}

void Disegno::setAssieme(const Assieme &assieme) {
    Disegno::assieme = assieme;
}

void Disegno::addParticolare(const Particolare particolare) {
    particolari.push_back(particolare);
}

