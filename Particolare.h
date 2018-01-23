//
// Created by edoardo on 22/01/18.
//

#ifndef GESTOREFILE_PARTICOLARE_H
#define GESTOREFILE_PARTICOLARE_H

#include "Disegno.h"
#include "Assieme.h"
#include <string>
#include <vector>
#include "Gcode.h"

using namespace std;

class Particolare {

private:
    int id;
    string descrizione;
    Assieme assieme;
    Disegno disegno;
    string sottodisegno;
    vector <Gcode> gcode;

public:

    int getId() const;

    const string &getDescrizione() const;

    void setDescrizione(const string &descrizione);

    const Assieme &getAssieme() const;

    void setAssieme(const Assieme &assieme);

    const Disegno &getDisegno() const;

    void setDisegno(const Disegno &disegno);

    const string &getSottodisegno() const;

    void setSottodisegno(const string &sottodisegno);

    const vector<Gcode> &getGcode() const;

    void addGcode(const Gcode gcode);

};


#endif //GESTOREFILE_PARTICOLARE_H
