//
//  donnees.cpp
//  lesRegles
//
//  Created by Arthur Giraud on 17/03/2018.
//  Copyright © 2018 Arthur Giraud. All rights reserved.
//

#include "donnees.h"
using namespace std;
Donnees::Donnees(int d1, int d2, int d3, int d4, int d5)  {
    d1=1;
    d2=2;
    d3=3;
    d4=4;
    d5=5;
    setD1(1);
    setD2(1);
    setD3(1);
    setD4(1);
    setD5(1);
}
Donnees::~Donnees(){
}
bool Donnees::setD1(int _d1){
    if(_d1>=0){
        d1=_d1;
        return true;
    }
    else return false;
}
bool Donnees::setD2(int _d2){
    if(_d2>d1 &&_d2<d3){
        d1=_d2;
        return true;
    }
    else return false;
    
}
bool Donnees::setD3(int _d3){
    if(_d3<d1){
        d3=_d3;
        return true;
    }
    else return false;
    
}
bool Donnees::setD4(int _d4){
    if(_d4%2==0){
        d4=_d4;
        return true;
    }
    else return false;
    
}
bool Donnees::setD5(int _d5){
    if(_d5!=d1 && d5!=d2 && d5!=d3 && d5!=d4){
        d5=_d5;
        return true;
    }
    else return false;
}
bool Donnees::valide(){
    return setD2(this->d2) && setD3(this->d3) && setD5(this->d5);
}
string Donnees::toString(){
    return "D("+to_string(d1)+"/"+to_string(d2)+"/"+to_string(d3)+"/"+to_string(d4)+"/"+to_string(d5)+")";
}

