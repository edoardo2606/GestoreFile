//
// Created by edoardo on 22/01/18.
//

#ifndef GESTOREFILE_GCODE_H
#define GESTOREFILE_GCODE_H

#include "Particolare.h"
#include "Assieme.h"
#include <string>
#include <vector>
#include "Gcode.h"

using namespace std;

class Gcode {
private:
    int id;
    Particolare particolare;
    string path;

public:
    int getId() const;

    const string &getPath() const;

    void setPath(const string &path);

    const Particolare &getParticolare() const;

    void setParticolare(const Particolare &particolare);

};


#endif //GESTOREFILE_GCODE_H
