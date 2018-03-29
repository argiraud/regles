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
    ConteneurRegles(Regle *regle, ConteneurRegles *suivantPositif);
    ConteneurRegles(Regle *regle, ConteneurRegles *suivantPositif, ConteneurRegles *suivantNegatif);
    //ConteneurRegles(ConteneurRegles const& cont);
    ~ConteneurRegles();
    void setSuivantPositif(ConteneurRegles *suivant){suivantPositif = suivant;}
    void setSuivantNegatif(ConteneurRegles *suivant){suivantNegatif = suivant;}
    Regle *courante;
    ConteneurRegles* getSuivantPositif()const{return suivantPositif;}
    ConteneurRegles* getSuivantNegatif()const{return suivantNegatif;}

private:
    ConteneurRegles *suivantPositif;
    ConteneurRegles *suivantNegatif;
};
#endif /* ConteneurRegles_h */
