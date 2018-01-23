
#ifndef GESTOREFILE_DISEGNO_H
#define GESTOREFILE_DISEGNO_H

#include "Particolare.h"
#include "Assieme.h"
#include <string>
#include <vector>

using namespace std;

class Disegno{
private:
    int id;
    string path;
    string descrizione;
    vector<Particolare> particolari;
    Assieme assieme;

public:

    int getId() const;

    const string &getPath() const;

    void setPath(const string &path);

    const string &getDescrizione() const;

    void setDescrizione(const string &descrizione);

    const vector<Particolare> &getParticolari() const;

    void addParticolare(const Particolare particolare);

    const Assieme &getAssieme() const;

    void setAssieme(const Assieme &assieme);
};


#endif //GESTOREFILE_DISEGNO_H
