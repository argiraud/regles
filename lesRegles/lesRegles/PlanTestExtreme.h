//
//  PlanTestExtreme.h
//  lesRegles
//
//  Created by Pereira Loann on 18/03/2018.
//  Copyright © 2018 Arthur Giraud. All rights reserved.
//

#ifndef PlanTestExtreme_h
#define PlanTestExtreme_h

#include "PlanTest.h"
#include "r2.h"
#include "r6.h"

class PlanTestExtreme : public PlanTest{
public:
    PlanTestExtreme():PlanTest(){Resultat::nbConstructeurs ++;}
    ~PlanTestExtreme();
protected:
    ConteneurRegles* chargerRegles();
};
#endif /* PlanTestExtreme_h */
