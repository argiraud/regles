//
//  regle.h
//  lesRegles
//
//  Created by Arthur Giraud on 17/03/2018.
//  Copyright © 2018 Arthur Giraud. All rights reserved.
//

#ifndef regle_h
#define regle_h
#include "resultat.h"
#include "donnees.h"
#include <stdio.h>
class Regle{
public:
    Regle(string id);
    virtual ~Regle();
    bool executer(Donnees* data, Resultat* result);
    string getId();
    Resultat* getResultat(){return resultat;}
protected:
    Donnees* donnees;
    Resultat* resultat;
    virtual bool executerRegle(){ return true;};
private:
    string id;
    bool prevalidation();
    void postvalidation();
};
#endif /* regle_h */
