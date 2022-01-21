//
// Created by vir on 1/19/2022.
//

#ifndef TEMA_POO_PAPAGAL_H
#define TEMA_POO_PAPAGAL_H
#include <iostream>
#include "animal.h"
#include <memory>

class papagal: public animal{
    std::string penaj;
    bool vorbeste;
    float hrana;
public:
    papagal(const std::string &numeAnimal, const std::string &specie, const std::string &rasa, int varsta,
            float greutate, const std::string &penaj, bool vorbeste);
    std::shared_ptr<animal> clone() const override;
    ~papagal() override=default;
    float cantitate_hrana() override;
};


#endif //TEMA_POO_PAPAGAL_H
