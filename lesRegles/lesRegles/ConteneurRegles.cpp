//
//  ConteneurRegles.cpp
//  lesRegles
//
//  Created by Arthur Giraud on 20/03/2018.
//  Copyright © 2018 Arthur Giraud. All rights reserved.
//

#include "ConteneurRegles.h"

ConteneurRegles::ConteneurRegles(Regle *regle){
    courante = regle;
    suivantPositif=nullptr;
    suivantNegatif=nullptr;
    Resultat::nbConstructeurs ++;
}
ConteneurRegles::ConteneurRegles(Regle *regle, ConteneurRegles *suivantPositif){
    courante = regle;
    this->suivantPositif=suivantPositif;
    suivantNegatif=nullptr;
    Resultat::nbConstructeurs ++;

}

ConteneurRegles::ConteneurRegles(Regle *regle, ConteneurRegles *suivantPositif, ConteneurRegles *suivantNegatif){
    courante = regle;
    this->suivantPositif=suivantPositif;
    this->suivantNegatif=suivantNegatif;
    Resultat::nbConstructeurs ++;

}

ConteneurRegles::~ConteneurRegles(){
    if(this->suivantNegatif!=nullptr) delete suivantNegatif;
    if(this->suivantPositif!=nullptr) delete suivantPositif;
    delete this->courante;
    Resultat::nbDestructeurs ++;
}
