//
// Created by vir on 1/19/2022.
//

#ifndef TEMA_POO_ANIMAL_H
#define TEMA_POO_ANIMAL_H
#include <vector>
#include <string>
#include <iostream>
#include <memory>
#include "cusca.h"

class animal {
protected:
    std::string numeAnimal;
    std::string specie;
    std::string rasa;
    float greutate;
    int varsta;
    float timp_activitate;
public:
    animal(const std::string &numeAnimal, const std::string &specie, const std::string &rasa, int varsta, float greutate);
    animal(const animal &copie);
    animal &operator=(const animal &copie);
    friend std::ostream &operator<<(std::ostream &os, const animal &animal);

    virtual ~animal()=default;
    virtual std::shared_ptr<animal> clone() const=0;
    float activitate_fizica();
    virtual float cantitate_hrana()=0;
};


#endif //TEMA_POO_ANIMAL_H
