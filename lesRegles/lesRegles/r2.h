//
//  r2.h
//  lesRegles
//
//  Created by Arthur Giraud on 17/03/2018.
//  Copyright © 2018 Arthur Giraud. All rights reserved.
//

#ifndef r2_h
#define r2_h

#include "regle.h"
#include <stdio.h>
class R2:public Regle{
public:
    R2();
    ~R2();
protected:
    bool executerRegle();
};

#endif /* r2_h */
