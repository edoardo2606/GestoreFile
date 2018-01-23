//
// Created by edoardo on 22/01/18.
//

#include "Gcode.h"


int Gcode::getId() const {
    return Gcode::id;
}

const string &Gcode::getPath() const {
    return Gcode::path;
}

void Gcode::setPath(const string &path) {
    Gcode::path = path;
}

const Particolare &Gcode::getParticolare() const {
    return Gcode::particolare;
}

void Gcode::setParticolare(const Particolare &particolare) {
    Gcode::particolare = particolare;
}
