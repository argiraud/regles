//
//  PlanTest.h
//  lesRegles
//
//  Created by Pereira Loann on 18/03/2018.
//  Copyright © 2018 Arthur Giraud. All rights reserved.
//

#ifndef PlanTest_h
#define PlanTest_h
#include "resultat.h"
#include "donnees.h"
#include "ConteneurRegles.h"
#include "r1.h"
#include "r4.h"
#include "r5.h"
#include "r2.h"
#include "r3.h"
#include "r6.h"

class PlanTest{
public:
    PlanTest();
    virtual ~PlanTest();
    Resultat* getResultat();
    void appliquer(Donnees donnees);
    void initialiserRegles();
private:
    Resultat* resultat;
    ConteneurRegles* conteneurRegleDepart;
protected:
    virtual ConteneurRegles *chargerRegles();
};

#endif /* PlanTest_h */
