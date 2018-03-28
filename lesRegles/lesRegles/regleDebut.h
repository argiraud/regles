//
//  regleDebut.h
//  lesRegles
//
//  Created by Arthur Giraud on 17/03/2018.
//  Copyright © 2018 Arthur Giraud. All rights reserved.
//

#ifndef regleDebut_h
#define regleDebut_h
#include "regleModification.h"
#include <stdio.h>
class RegleDebut: public RegleModification{
public:
    RegleDebut():RegleModification("DEB"){Resultat::nbConstructeurs ++;}
    ~RegleDebut();
protected:
   void executerRegleModification();
};
#endif /* regleDebut_h */
