//
//  ensembleDonnees1.h
//  lesRegles
//
//  Created by Arthur Giraud on 17/03/2018.
//  Copyright © 2018 Arthur Giraud. All rights reserved.
//

#ifndef ensembleDonnees1_h
#define ensembleDonnees1_h
#include "donnees.h"
#include <stdio.h>
#include "resultat.h"

class EnsembleDonnees1: public Donnees{
public:
    EnsembleDonnees1();
    ~EnsembleDonnees1(){Resultat::nbDestructeurs ++;}
};

#endif /* ensembleDonnees1_h */
