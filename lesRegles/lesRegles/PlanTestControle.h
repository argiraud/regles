//
//  PlanTestControle.h
//  lesRegles
//
//  Created by Pereira Loann on 18/03/2018.
//  Copyright © 2018 Arthur Giraud. All rights reserved.
//

#ifndef PlanTestControle_h
#define PlanTestControle_h

#include "PlanTestExtreme.h"
#include "r3.h"
#include "regleDebut.h"
#include "regleFin.h"

class PlanTestControle : public PlanTestExtreme{
public:
    PlanTestControle():PlanTestExtreme(){Resultat::nbConstructeurs ++;}
    ~PlanTestControle();
protected:
    ConteneurRegles* chargerRegles();
};

#endif /* PlanTestControle_h */
