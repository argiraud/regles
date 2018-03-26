//
//  r6.h
//  lesRegles
//
//  Created by Arthur Giraud on 17/03/2018.
//  Copyright © 2018 Arthur Giraud. All rights reserved.
//

#ifndef r6_h
#define r6_h

#include "regleModification.h"
#include <stdio.h>
class R6:public RegleModification{
public:
    R6():RegleModification("R6"){}
    ~R6();
protected:
    void executerRegleModification();
};
#endif /* r6_h */
