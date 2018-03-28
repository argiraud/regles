//
//  ensembleDonnees2.h
//  lesRegles
//
//  Created by Arthur Giraud on 17/03/2018.
//  Copyright © 2018 Arthur Giraud. All rights reserved.
//

#ifndef ensembleDonnees2_h
#define ensembleDonnees2_h

#include <stdio.h>
#include "donnees.h"
#include "resultat.h"

class EnsembleDonnees2:public Donnees{
public:
    EnsembleDonnees2();
    ~EnsembleDonnees2(){Resultat::nbDestructeurs ++;}
};

#endif /* ensembleDonnees2_h */
