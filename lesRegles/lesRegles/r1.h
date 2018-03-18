//
//  r1.h
//  lesRegles
//
//  Created by Arthur Giraud on 17/03/2018.
//  Copyright © 2018 Arthur Giraud. All rights reserved.
//

#ifndef r1_h
#define r1_h
#include "regle.h"
#include <stdio.h>
class R1:public Regle{
public:
    R1();
    ~R1();
protected:
    bool executerRegle();
};
#endif /* r1_h */
