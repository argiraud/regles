//
//  r3.h
//  lesRegles
//
//  Created by Arthur Giraud on 17/03/2018.
//  Copyright © 2018 Arthur Giraud. All rights reserved.
//

#ifndef r3_h
#define r3_h

#include "regle.h"
#include <stdio.h>
class R3:public Regle{
public:
    R3():Regle("R3"){}
    ~R3();
protected:
    bool executerRegle();
};
#endif /* r3_h */
