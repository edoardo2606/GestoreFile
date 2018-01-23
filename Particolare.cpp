//
// Created by edoardo on 22/01/18.
//

#include "Particolare.h"

int Particolare::getId() const {
    return id;
}

const string &Particolare::getDescrizione() const {
    return descrizione;
}

void Particolare::setDescrizione(const string &descrizione) {
    Particolare::descrizione = descrizione;
}

const Assieme &Particolare::getAssieme() const {
    return assieme;
}

void Particolare::setAssieme(const Assieme &assieme) {
    Particolare::assieme = assieme;
}

const Disegno &Particolare::getDisegno() const {
    return disegno;
}

void Particolare::setDisegno(const Disegno &disegno) {
    Particolare::disegno = disegno;
}

const string &Particolare::getSottodisegno() const {
    return sottodisegno;
}

void Particolare::setSottodisegno(const string &sottodisegno) {
    Particolare::sottodisegno = sottodisegno;
}

const vector<Gcode> &Particolare::getGcode() const {
    return gcode;
}

void Particolare::addGcode(const Gcode gcode) {
   Particolare::gcode.push_back(gcode);
}
