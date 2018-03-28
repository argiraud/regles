//
//  regleModification.h
//  lesRegles
//
//  Created by Arthur Giraud on 17/03/2018.
//  Copyright © 2018 Arthur Giraud. All rights reserved.
//

#ifndef regleModification_h
#define regleModification_h
#include "regle.h"
#include <stdio.h>
#include <string>
using namespace std;
class RegleModification : public Regle{
public:
    RegleModification(string id);
    ~RegleModification();
    bool executerRegle();
    virtual void executerRegleModification(){}
};
#endif /* regleModification_h */
