//
//  r4.h
//  lesRegles
//
//  Created by Arthur Giraud on 17/03/2018.
//  Copyright © 2018 Arthur Giraud. All rights reserved.
//

#ifndef r4_h
#define r4_h
#include "regleModification.h"
#include <stdio.h>
class R4:public RegleModification{
public:
    R4():RegleModification("R4"){Resultat::nbConstructeurs ++;}
    ~R4();
protected:
    void executerRegleModification();
};
#endif /* r4_h */
