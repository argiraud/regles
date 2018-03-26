//
//  ConteneurRegles.h
//  lesRegles
//
//  Created by Arthur Giraud on 20/03/2018.
//  Copyright © 2018 Arthur Giraud. All rights reserved.
//

#ifndef ConteneurRegles_h
#define ConteneurRegles_h

#include <stdio.h>
#include "regle.h"

class ConteneurRegles{
public:
    ConteneurRegles(Regle *regle);
    void setSuivantPositif(ConteneurRegles *suivant){*suivantPositif = *suivant;}
    void setSuivantNegatif(ConteneurRegles *suivant){*suivantNegatif = *suivant;}
    Regle *courante;
    ConteneurRegles *suivantPositif=NULL;
    ConteneurRegles *suivantNegatif=NULL;
};
#endif /* ConteneurRegles_h */
