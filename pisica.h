//
// Created by vir on 1/19/2022.
//

#ifndef TEMA_POO_PISICA_H
#define TEMA_POO_PISICA_H
#include <iostream>
#include "animal.h"
#include <memory>

class pisica: public animal {
    bool sterilizare;
    std::string stare_sanatate;
    float hrana;
public:
    pisica(const std::string &numeAnimal, const std::string &specie, const std::string &rasa, int varsta,
           float greutate, bool sterilizare, const std::string &stareSanatate);

    std::shared_ptr<animal> clone() const override;
    ~pisica() override=default;
    float cantitate_hrana() override;


};


#endif //TEMA_POO_PISICA_H
