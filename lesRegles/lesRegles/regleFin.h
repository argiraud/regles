//
//  regleFin.h
//  lesRegles
//
//  Created by Arthur Giraud on 17/03/2018.
//  Copyright © 2018 Arthur Giraud. All rights reserved.
//

#ifndef regleFin_h
#define regleFin_h

#include "regleModification.h"
#include <stdio.h>
class RegleFin: public RegleModification{
public:
    RegleFin():RegleModification("FIN"){}
    ~RegleFin();
protected:
    void executerRegleModification();
};
#endif /* regleFin_h */
