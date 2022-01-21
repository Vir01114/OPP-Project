//
// Created by vir on 1/19/2022.
//

#include "animal.h"
animal::animal(const std::string &numeAnimal, const std::string &specie, const std::string &rasa, int varsta, float greutate) : numeAnimal(numeAnimal), specie(specie), rasa(rasa), varsta(varsta), greutate(greutate), timp_activitate(activitate_fizica()) {}
animal::animal(const animal &copie) {
    this->numeAnimal = copie.numeAnimal;
    this->specie = copie.specie;
    this->rasa = copie.rasa;
    this->varsta = copie.varsta;
    this->greutate = copie.greutate;
    this->timp_activitate = copie.timp_activitate;
}
animal& animal:: operator=(const animal &copie) {
    this->numeAnimal = copie.numeAnimal;
    this->specie = copie.specie;
    this->rasa = copie.rasa;
    this->varsta = copie.varsta;
    this->greutate = copie.greutate;
    this->timp_activitate = copie.timp_activitate;
}
std::ostream &operator<<(std::ostream &os, const animal &animal) {
    os << "numeAnimal: " << animal.numeAnimal<< " specie: " << animal.specie << " rasa: " << animal.rasa << " varsta: " << animal.varsta<< "greutate:" << animal.greutate<< "timp activitate:" << animal.timp_activitate<< "\n";
    return os;
}

float animal::activitate_fizica() {
    if (varsta < 3)
        timp_activitate=2;
    else if (varsta>=3 && varsta<5)
        timp_activitate=1.5;
    else
        timp_activitate=0.5;
    return timp_activitate;
}
