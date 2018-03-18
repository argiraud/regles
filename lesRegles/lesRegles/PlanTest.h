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
class PlanTest{
public:
    PlanTest();
    ~PlanTest();
    Resultat* getResultat();
    void appliquer(Donnees donnees);
    void initialiserRegles();
private:
    Resultat* resultat;
   // ConteneurRegles* conteneurRegleDepart
protected:
  //  ConteneurRegles *chargerRegles();
};

#endif /* PlanTest_h */
