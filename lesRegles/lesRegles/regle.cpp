//
//  regle.cpp
//  lesRegles
//
//  Created by Arthur Giraud on 17/03/2018.
//  Copyright © 2018 Arthur Giraud. All rights reserved.
//

#include "regle.h"

Regle::Regle(string id){
    this->id=id;
}

Regle::~Regle(){
    
}

string Regle::getId(){
    return id;
}

bool Regle::executer(Donnees* donnees, Resultat* resultat){
    bool resultatExecution = false;
    this->donnees = donnees;
    this->resultat = resultat;
    
    
    resultat->info(id, "Debut de la règle");
    
    prevalidation();
    resultatExecution = executerRegle();
    postvalidation();
    resultat->info(id, "Fin de la regle");
    
    return resultatExecution;
}

bool Regle::prevalidation(){
    if(donnees->valide()) return true;
    else{
        resultat->info(id, "Prevalidation en echec");
        return false;
    }
}

void Regle::postvalidation(){
    if(!donnees->valide()) resultat->info(id, "Postvalidation en echec");
}
