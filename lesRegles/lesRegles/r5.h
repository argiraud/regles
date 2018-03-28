//
//  r5.h
//  lesRegles
//
//  Created by Arthur Giraud on 17/03/2018.
//  Copyright © 2018 Arthur Giraud. All rights reserved.
//

#ifndef r5_h
#define r5_h

#include "regleModification.h"
#include <stdio.h>
class R5:public RegleModification{
public:
    R5():RegleModification("R5"){Resultat::nbConstructeurs ++;}
    ~R5();
protected:
    void executerRegleModification();
};
#endif /* r5_h */
